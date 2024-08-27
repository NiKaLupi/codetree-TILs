#include <iostream>
using namespace std;

#define MAX_N 100
int x[MAX_N] = {}, x1[MAX_N] = {};
int main() {
    int n;
    cin>> n;

    int a = 0, b = 100;


    bool ans = true;
    for(int i = 0; i < n; i++){
        cin>> x[i]>> x1[i]; 
        if(x[i] >= a || x[i] <= b){ 
            if(x[i] > a) a = x[i];
            if(x1[i] < b) b = x1[i];
        }
        else ans = false;  
    }
    if(ans) cout<< "Yes";
    else cout<< "No";
    return 0;
}