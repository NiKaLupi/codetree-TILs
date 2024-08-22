#include <iostream>
#include <algorithm>

#define MAX_N 100

using namespace std;

int arr[MAX_N] = {};

int main() {
    int n, m;
    cin >> n >> m;

    int max_ele = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        max_ele = max(max_ele, arr[i]);
        sum += arr[i];
    }

    int left = max_ele, right = sum;
    int ans = right;

    while (left <= right) {
        int mid = (left + right) / 2;
        int cnt = 1;
        int current_sum = 0;

        for (int i = 0; i < n; i++) {
            if (current_sum + arr[i] > mid) {
                cnt++;
                current_sum = arr[i];
            } else {
                current_sum += arr[i];
            }
        }

        if (cnt <= m) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << ans;
    return 0;
}