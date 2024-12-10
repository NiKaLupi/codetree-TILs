#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 100000
int arr[MAX_N];
int merged_arr1[MAX_N / 2 + 1];
int merged_arr2[MAX_N / 2 + 1];
int sorted_arr[MAX_N];

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int mid = n / 2;
    int size1 = mid;            // Size of the first half
    int size2 = n - mid;        // Size of the second half

    // Copy first half to merged_arr1
    for (int i = 0; i < size1; i++) {
        merged_arr1[i] = arr[i];
    }

    // Copy second half to merged_arr2
    for (int i = 0; i < size2; i++) {
        merged_arr2[i] = arr[mid + i];
    }

    // Sort the two halves
    sort(merged_arr1, merged_arr1 + size1);
    sort(merged_arr2, merged_arr2 + size2);

    // Merge the sorted halves into sorted_arr
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (merged_arr1[i] <= merged_arr2[j]) {
            sorted_arr[k++] = merged_arr1[i++];
        } else {
            sorted_arr[k++] = merged_arr2[j++];
        }
    }

    // Add remaining elements from merged_arr1
    while (i < size1) {
        sorted_arr[k++] = merged_arr1[i++];
    }

    // Add remaining elements from merged_arr2
    while (j < size2) {
        sorted_arr[k++] = merged_arr2[j++];
    }

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << sorted_arr[i] << ' ';
    }

    return 0;
}
