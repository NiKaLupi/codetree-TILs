#include <iostream>
using namespace std;

#define MAX_N 100

int arr[MAX_N];

int main() {
    int n;
    cin >> n;

    if (n < 2) {
        cout << -1 << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int firstMin = 101, secondMin = 101;
    int secondMinIndex = -1;
    bool isDuplicate = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] < firstMin) {
            secondMin = firstMin;
            firstMin = arr[i];
            isDuplicate = false;
        } else if (arr[i] > firstMin && arr[i] < secondMin) {
            secondMin = arr[i];
            secondMinIndex = i + 1; // 1-based index
            isDuplicate = false;
        } else if (arr[i] == secondMin) {
            isDuplicate = true;
        }
    }

    if (isDuplicate || secondMin == firstMin) {
        cout << -1 << endl;
    } else {
        cout << secondMinIndex << endl;
    }

    return 0;
}