#include<iostream>
using namespace std;

void solution(){
    int n; cin >> n;
    
    int counter = 0;
    int last_f = 0;
    while(n--){
        int s, f;
        cin >> s >> f;

        if (s >= last_f){
            counter++;
            last_f = f;
        }
    }

    cout << counter << endl;
}

void solutuion2(){
    int n; cin >> n;

    
}

int main(){
    int t; cin >> t;
    while(t--)solution();
    return 0;
}
