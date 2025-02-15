#include <iostream>
#include <algorithm> // std::sort
using namespace std;

#define MAX_N 100000
int arr[MAX_N];

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // C++ STL sort 사용
    sort(arr, arr + n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}
