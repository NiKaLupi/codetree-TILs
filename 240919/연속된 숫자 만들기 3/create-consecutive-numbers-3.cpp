#include <iostream>
#include <algorithm>
using namespace std;
int arr[3] = {};
int main() {
    cin>> arr[0]>> arr[1]>> arr[2];
    sort(arr, arr + 3);
    if(arr[0] == arr[1] - 1) cout<< arr[2] - arr[1] - 1; 
    else{
        if(arr[1] - arr[0 ]> arr[2] - arr[1]) cout<< arr[1] - arr[0] - 1; 
        else cout<< arr[2] - arr[1] - 1; 
    }
    return 0;
}