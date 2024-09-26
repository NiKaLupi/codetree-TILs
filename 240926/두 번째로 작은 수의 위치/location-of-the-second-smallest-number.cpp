#include <iostream>
using namespace std;

#define MAX_N 100

int arr[MAX_N];

int main() {
    int n;
    cin>> n;

    for(int i = 0; i < n; i++){
        cin>> arr[i];
    }

    int first_min_num = 101, second_min_num = 101; 
    int index = -1;
    bool num = false;
    for(int i = 0; i < n; i++){
        if(first_min_num > arr[i] ) second_min_num = first_min_num, first_min_num = arr[i], num = false;
        else if(second_min_num > arr[i]) second_min_num = arr[i], num = false, index = i + 1;
        else if(second_min_num == arr[i]) num = true;
    }
    if(num || (second_min_num == first_min_num)) cout<< -1;
    else cout<< index;
    return 0;
}