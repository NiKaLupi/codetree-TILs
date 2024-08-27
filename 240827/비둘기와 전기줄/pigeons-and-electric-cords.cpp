#include <iostream>
#define MAX_N 100
using namespace std;

int arr[MAX_N] ={};
bool appeared[MAX_N] = {};

int main() {
    int n;
    cin>> n;

    int bird, location;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin>> bird>> location;
        if(appeared[bird - 1] == true && arr[bird - 1] != location) cnt++;
        arr[bird - 1] = location;
        appeared[bird - 1] = true;            
    }

    cout<< cnt;
    return 0;
}