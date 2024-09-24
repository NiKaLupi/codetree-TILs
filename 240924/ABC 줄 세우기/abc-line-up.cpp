#include <iostream>
using namespace std;

#define MAX_N 26
char line[MAX_N];

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> line[i];
    }

    int ex_time = 0;
    for (int i = 0; i < n; i++) {
        while (line[i] - 'A' != i) {
            int target_index = line[i] - 'A';
            swap(line[i], line[target_index]);
            ex_time++;
        }
    }

    cout << ex_time;
    return 0;
}