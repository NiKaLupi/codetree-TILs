#include <iostream>
using namespace std;

#define MAX_N 100

int p1[MAX_N] = {}; 
int p2[MAX_N] = {};

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> p1[i] >> p2[i];
    }

    int max_win = 0;
    // 가능한 모든 매칭 경우의 수
    int mappings[6][3] = {
        {1, 2, 3},  // 1: 가위, 2: 바위, 3: 보
        {1, 3, 2},  // 1: 가위, 2: 보, 3: 바위
        {2, 1, 3},  // 1: 바위, 2: 가위, 3: 보
        {2, 3, 1},  // 1: 바위, 2: 보, 3: 가위
        {3, 1, 2},  // 1: 보, 2: 가위, 3: 바위
        {3, 2, 1}   // 1: 보, 2: 바위, 3: 가위
    };

    for (int m = 0; m < 6; m++) {
        int win = 0;
        for (int k = 0; k < n; k++) {
            int a = mappings[m][p1[k] - 1];
            int b = mappings[m][p2[k] - 1];
            if ((a == 1 && b == 3) || (a == 2 && b == 1) || (a == 3 && b == 2)) {
                win++;
            }
        }
        if (win > max_win) {
            max_win = win;
        }
    }

    cout << max_win;
    return 0;
}