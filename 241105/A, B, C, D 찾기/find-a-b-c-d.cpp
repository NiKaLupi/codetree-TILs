#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[15];
    int a, b, c, d;
    for(int i = 0; i < 15; i++){
        cin>> arr[i];
    }
    sort(arr, arr + 15);
    a = arr[0];
    b = arr[1];
    if(a + b == arr[2]) c = arr[3];
    else c = arr[2];
    d = arr[14] - a - b - c;
    cout<< a<<' '<< b<< ' '<< c<< ' '<<d;
    return 0;
}