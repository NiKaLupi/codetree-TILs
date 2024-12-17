#include <iostream>
using namespace std;
#define MAX_N 100000
int arr[MAX_N];
int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Selection Sort Algorithm
    for (int i = 0; i < n - 1; i++) {
        int max_index = 0;
        for (int j = 1; j < n - i; j++) {
            if (arr[j] > arr[max_index]) {
                max_index = j;
            }
        }
        // Swap the largest element with the last unsorted element
        swap(arr[max_index], arr[n - i - 1]);
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}
