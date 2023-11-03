#include<iostream>
using namespace std;

const int LEN = 1e5;

class Solution{
public:
    int sides[LEN]{0};
    int dp[100][100]{0};
    int n;
    Solution(){
        cin >> n;
        for (int i=0; i<=n; i++) cin >> sides[i];

        int result = m(1, n);
        cout << result << endl;
    }

    int m(int l, int r){
        if (l == r || dp[l][r] != 0){
            return dp[l][r];
        }else{
            int min = 9999999;
            for (int i=l; i<=r; i++){
                int temp = m(l, i) + m(i+1, r) + sides[i-1] * sides[i] * sides[i+1];
                min = temp < min ? temp : min;
            }
            dp[l][r] = min;
            return dp[l][r];
        }
    }
};

int main(){
    int t;
    cin >> t;
    while(t--)Solution();
    return 0;
}