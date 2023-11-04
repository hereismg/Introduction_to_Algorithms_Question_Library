#include<iostream>
#include<vector>
using namespace std;

const int LEN = 1e5;

class Solution{
public:
    int sides[LEN]{0};
    vector<vector<int>> dp;
    int n;
    Solution(): dp(100, vector<int>(100, 0)){
        cin >> n;
        for (int i=0; i<=n; i++) cin >> sides[i];

        int result = m(1, n);
        cout << result << endl;
        // debug();
    }

    int m(int l, int r){
        if (l == r || dp[l][r] != 0){
            return dp[l][r];
        }else{
            int min = 9999999;
            for (int i=l; i<=r-1; i++){
                int leftSum = m(l, i), rightSum = m(i+1, r);
                int temp = leftSum + rightSum + sides[l-1] * sides[i] * sides[r];
                min = temp < min ? temp : min;
            }
            dp[l][r] = min;
            return dp[l][r];
        }
    }

    void debug(){
        for (int i=0; i<=n; i++){
            for (int j=0; j<=n; j++){
                cout << dp[i][j] << "\t\t";
            }
            cout << endl;
        }
    }
};

int main(){
    int t;
    cin >> t;
    while(t--)Solution();
    return 0;
}