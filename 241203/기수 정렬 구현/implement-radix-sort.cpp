#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_N 1000
int arr[MAX_N];
int main() {
    int n; 
    cin>> n;
    for(int i = 0; i < n; i++){
        cin>> arr[i];
    }
    sort(arr, arr + n);
    for(int i = 0; i < n; i++){
        cout<< arr[i]<< ' ';
    }
    return 0;
}