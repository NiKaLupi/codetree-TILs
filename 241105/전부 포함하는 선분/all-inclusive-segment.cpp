#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_N 100
int x[MAX_N], x1[MAX_N], cx[MAX_N], cx1[MAX_N];
int main() {
    int n;
    cin>> n;

    for(int i = 0; i < n; i++){
        cin>> x[i]>> x1[i];
        cx[i] = x[i], cx1[i] = x1[i];
    }

    int min, max;
    sort(x, x + n);
    for(int i = 0; i < n; i++){
        if(x[0] == cx[i]) min = i;
    }
    sort(x1, x1 + n); 
    for(int i = 0; i < n; i++){
        if(x1[n -1] == cx1[i]) max = i;
    }
    int ans; 
    if(x1[n - 1] == cx1[min]) ans =  x1[n - 2] - x[1];
    else ans =  x1[n - 1] - x[1];
    if(x[n] == cx[max] && ans > x1[n - 2] - x[1]) ans = x1[n - 2] - x[1];
    else if(x1[n - 2] - x[0] < ans ) ans =  x1[n - 2] - x[0]; 
    cout<< ans;
    return 0;
}