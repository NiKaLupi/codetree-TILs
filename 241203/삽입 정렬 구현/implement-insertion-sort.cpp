#include <iostream>
using namespace std;
#define MAX_N 1000
int arr[MAX_N];
int main() {
    int n;
    cin>> n; 
    for(int i = 0; i < n; i++){
        cin>> arr[i];
    }
    for(int i = 0; i < n; i++){
        int key = arr[i];
        for(int j = i; j >= 0; j--){
            if(arr[j] > key){ 
                arr[j + 1] = arr[j];
                arr[j] = key;
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout<< arr[i]<< ' ';
    }
    return 0;
}