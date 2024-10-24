#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 100000
int arr[MAX_N * 2];
int smaller[MAX_N * 2];
int bigger[MAX_N * 2];

int main() {
    int n;
    cin>> n;

    for(int i = 0; i < n * 2; i++)
        cin>> arr[i];
    
    sort(arr, arr + n * 2);

    for(int i = 0; i < n; i++)
        smaller[i] = arr[i];
    for(int i = n; i < n * 2; i++)
        bigger[i - n] = arr[i];
    
    int min_gap = 1000000000;
    for(int i = 0; i < n; i++){
        if(min_gap > bigger[i] - smaller[i]) min_gap = bigger[i] - smaller[i];
    }
    cout<< min_gap;
    return 0;
}