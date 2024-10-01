#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    int arr1[1000] = {}, arr2[1000] = {};
    int n, a, i, idx1 = 0, idx2 = 0, min, pl;
    cin >> n;
    if(n == 3){
        cin>> n >> a>> i
        cout<< n * a * i
        return 0;
    }
    for (i = 0; i < n; i++) {
        cin >> a;
        if (a >= 0) {
            arr1[idx1] = a;
            idx1++;
        }
        else {
            arr2[idx2] = a;
            idx2++;
        }
    }
    sort(arr1, arr1 + idx1, greater<int>());
    sort(arr2, arr2 + idx2);
    min = arr2[0] * arr2[1];
    pl = arr1[1] * arr1[2];
    if (min > pl)
        cout << arr1[0] * min;
    else
        cout << arr1[0] * pl;
    return 0;
}