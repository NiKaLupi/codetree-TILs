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
        for(int j = 0; j < n; j++){
            int temp;
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for(int i = 1; i < n + 1 ; i++){
        cout<< arr[i]<< ' ';
    }
    return 0;
}