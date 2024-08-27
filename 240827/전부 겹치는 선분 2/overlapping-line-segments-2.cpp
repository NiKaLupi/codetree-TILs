#include <iostream>
#include <algorithm>
#define MAX_N 100
using namespace std;

int x[MAX_N] = {}, x1[MAX_N] = {};
int main() {
    int n;
    cin>> n;
    for(int i = 0; i < n; i++){
        cin>> x[i]>> x1[i];
    }

    bool ans = false;
    for(int i = 0; i < n; i++){
        int max_x = 0, min_x1 = 100;
        for(int j = 0; j < n; j++){
            if(i == j) continue;
            max_x = max(x[j], max_x);
            min_x1 = min(x1[j], min_x1);
        }
        if(max_x <= min_x1) ans = true;
    }
    if(ans) cout<< "Yes";
    else cout<< "No";
    return 0;
}