#include <iostream>
using namespace std;    
#define MAX_N 10000
int arr[MAX_N];
int main() {
    int n;
    cin>> n;
    
    int avg = 0;
    for(int i = 0; i < n; i++){
        cin>> arr[i];
        avg += arr[i];
    }
    avg /= n;
    
    int moved_block = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > avg) moved_block += arr[i] - avg;
    }
    cout<< moved_block;
    return 0;
}