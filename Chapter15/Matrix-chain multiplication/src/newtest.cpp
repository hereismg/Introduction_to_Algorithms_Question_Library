#include<iostream>
#include<vector>
using namespace std;

const int LEN = 1e4;

int main(){
    int (*arr)[] = new int[LEN][LEN];
    vector<vector<int>> arr2(100, vector<int>(100, 2023));
    // int *arr = new int[LEN];
    arr2[50][90] = 114514;
    cout << arr2[50][90] << endl;
    cout << arr2[51][91] << endl;
    return 0;
}
