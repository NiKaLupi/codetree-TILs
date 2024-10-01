#include <iostream>
using namespace std;

#define MAX_N 100

int arr[MAX_N];

int main() {
    int n;
    cin >> n;

    int v, fir_min = 101, sec_min = 101;
    bool duplicated = false;
    for (int i = 0; i < n; i++) {
        cin >> v;
        if(v == sec_min) duplicated = true;
        if(v < fir_min) sec_min = fir_min, fir_min = v;
        else if(v < sec_min && v != fir_min) sec_min = v, duplicated = false;
        arr[i] = v;
    }
    //cout<< fir_min<<  ' '<< sec_min<< endl;

    int cnt = 0, index;
    for(int i = 0; i < n; i++){
        if(arr[i] == sec_min) index = i + 1, cnt++;
    }
    if(cnt == 1) cout<< index;
    else cout<< -1;
    return 0;
}