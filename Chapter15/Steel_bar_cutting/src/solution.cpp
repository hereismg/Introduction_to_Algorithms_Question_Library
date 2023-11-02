#include<iostream>
using namespace std;

const int LEN = 1e5;

class Solution{
public:
    int priceTable[LEN]{0};
    int l;
    int n;
    Solution(){
        cin >> l >> n;
        for (int i=0; i<n; i++) cin >> priceTable[i];

        
    }
};

int main(){
    int t;
    cin >> t;
    while(t--) Solution();
    return 0;
}