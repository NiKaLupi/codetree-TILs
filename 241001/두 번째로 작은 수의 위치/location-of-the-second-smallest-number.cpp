#include <iostream>
using namespace std;

#define MAX_N 100

int arr[MAX_N];

int main() {
    int n;
    cin >> n;

    int v, fir_min = 101, sec_min = 101, index;
    bool duplicated = false;
    for (int i = 0; i < n; i++) {
        cin >> v;
        if(v == sec_min) duplicated = true;
        if(v < fir_min) fir_min = v;
        else if(v < sec_min && v != fir_min) sec_min = v, duplicated = false, index = i + 1;
    }
    //cout<< fir_min<<  ' '<< sec_min;
    if(duplicated || sec_min == fir_min || sec_min == 101) cout<< -1;
    else cout<< index;
    return 0;
}