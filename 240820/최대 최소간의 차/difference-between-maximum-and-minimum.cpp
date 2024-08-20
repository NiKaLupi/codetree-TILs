#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <climits>

#define MAX_N 100

using namespace std;

int arr[MAX_N] = {};

int main() {
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min_cost = INT_MAX;

    int max_ele = *max_element(arr, arr + n);
    for (int i = 1; i <= max_ele - k + 1; i++) {
        int cost = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] > i + k)
                cost += abs(arr[j] -i -k);
            if(arr[j] < i)
                cost += abs(i -arr[j]);
        }
        if (min_cost > cost) min_cost = cost;
    }

    cout << min_cost;
    return 0;
}