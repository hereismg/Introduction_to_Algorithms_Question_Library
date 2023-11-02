#include<iostream>
using namespace std;

const int LEN = 1e5;

class Solution{
public:
    int priceTable[LEN]{0};
    int l;
    int n;

    int maxPrice[LEN];
    Solution(){
        cin >> l >> n;
        for (int i=1; i<=n; i++) cin >> priceTable[i];

        for (int currentLen=1; currentLen<=l; currentLen++){
            int max = 0;
            for (int cut=1; cut<=n && cut<=currentLen; cut++){
                // dp[cut][currentLen] = dp[n+1][currentLen - cut] + priceTable[cut];
                int temp = maxPrice[currentLen - cut] + priceTable[cut];
                max = temp > max ? temp : max;
            }
            maxPrice[currentLen] = max;
        }
        cout << maxPrice[l] << endl;
    }
};

int main(){
    int t;
    cin >> t;
    while(t--) Solution();
    return 0;
}