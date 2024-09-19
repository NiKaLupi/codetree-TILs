#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX_N 1000

int seat[MAX_N] = {};

int main() {
    int n;
    string s;

    cin >> n >> s;

    for (int i = 0; i < n; i++) {
        seat[i] = s[i] - '0';
    }

    int x1 = -1, x2 = -1;
    int max_distance = 0;

    // Find the maximum distance between two occupied seats
    for (int i = 0; i < n; i++) {
        if (seat[i] == 1) {
            for (int j = i + 1; j < n; j++) {
                if (seat[j] == 1) {
                    int distance = j - i;
                    if (distance > max_distance) {
                        x1 = i;
                        x2 = j;
                        max_distance = distance / 2;
                    }
                    break;
                }
            }
        }
    }

    // Place a new seat at the midpoint if x1 and x2 are valid
    if (x1 != -1 && x2 != -1) {
        int new_seat_position = (x1 + x2) / 2;
        seat[new_seat_position] = 1;
    }

    // Find the minimum distance between occupied seats after placing the new seat
    int min_distance = n;
    int last_occupied = -1;

    for (int i = 0; i < n; i++) {
        if (seat[i] == 1) {
            if (last_occupied != -1) {
                min_distance = min(min_distance, i - last_occupied);
            }
            last_occupied = i;
        }
    }

    cout << min_distance << endl;

    return 0;
}