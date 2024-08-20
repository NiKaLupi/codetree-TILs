#include <iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2; // 첫 번째 직사각형의 좌표
    int x3, y3, x4, y4; // 두 번째 직사각형의 좌표
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    // 두 직사각형이 겹치는지 확인
    if (x2 < x3 || x4 < x1 || y2 < y3 || y4 < y1) {
        cout << "nonoverlapping";
    } else {
        cout << "overlapping";
    }
    return 0;
}