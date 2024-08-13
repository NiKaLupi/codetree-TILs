#include <iostream>

#define MAX_N 100

using namespace std;
int arr[MAX_N] = {};
int arr1[MAX_N] = {};
int main() {
    int n, m;
    cin>> n>> m;
    for(int i = 0; i < n; i++){
        cin>> arr[i];
        arr1[i] = arr[i];
    }
    int ans = 0;
    for(int i = 1; i <= 5000; i++){
        int a = 0;
        int cnt = 0;
        for(int j = 0; j < n; j++){
            if(arr[j] > i) break;
            if(a + arr[j] <= i)
                a += arr[j]; 
            else{
                a = arr[j];
                cnt++;
            }
        }
        if(cnt == m - 1){
            ans = i;
            break;
        }
    }
    cout<< ans;
    return 0;
}