#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_N 100000
int arr[MAX_N];
int merged_arr1[MAX_N / 2];
int merged_arr2[MAX_N / 2];
int sorted_arr[MAX_N];
int main(){
    int n;
    cin>> n;

    for(int i = 0; i < n; i++){
        cin>> arr[i];
    }for(int i = 0; i < n / 2; i++){
        merged_arr1[i] = arr[i];
    }for(int i = n / 2; i < n; i++){
        merged_arr2[i] = arr[i];
    }
    sort(merged_arr1, merged_arr1 + n / 2);
    sort(merged_arr2, merged_arr2 + n / 2);
    int i = 0, j = n / 2, k = 0;
    while(i < n / 2 && j < n){
        if(merged_arr1[i] <= merged_arr2[j]){ 
            sorted_arr[k] = merged_arr1[i];
            i++; 
        }else{
            sorted_arr[k] = merged_arr2[j];
            j++;
        }
        k++;
    }
    if(i == n / 2 && j != n){
        while(k < n){
            sorted_arr[k] = merged_arr2[j];
            k++;
            j++;
        }
    }else if(i != n / 2 && j != n){
        while(k < n){
            sorted_arr[k] = merged_arr1[i];
            k++;
            i++;
        }
    }
    for(int i = 0; i < n; i++){
        cout<< sorted_arr[i]<<  ' ';
    }
    return 0;
}