#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_N 100

int arr[MAX_N] = {};

bool canDivide(int maxSum, int n, int m) {
    int currentSum = 0, segments = 1;

    for (int i = 0; i < n; ++i) {
        if (arr[i] > maxSum) {
            return false; // A single element is greater than maxSum, so division isn't possible.
        }
        if (currentSum + arr[i] > maxSum) {
            ++segments;
            currentSum = arr[i];
            if (segments > m) {
                return false;
            }
        } else {
            currentSum += arr[i];
        }
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int low = *max_element(arr, arr + n);
    int high = accumulate(arr, arr + n, 0);
    int ans = high;

    while (low <= high) {
        int mid = low + (low - high) / 2;
        if (canDivide(mid, n, m)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans << endl;
    return 0;
}