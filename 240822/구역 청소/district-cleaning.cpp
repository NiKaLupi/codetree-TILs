#include <iostream>
#include <algorithm>

using namespace std;

int a, b, c, d;

bool Intersecting(int x1, int x2, int x3, int x4) {
    // 겹치지 않는 경우에 대한 처리를 먼저 진행합니다.
    if(x2 < x3 || x4 < x1)
        return false;
    // 나머지는 전부 겹치는 경우라고 볼 수 있습니다.
    else
        return true;
}

int main() {
    // 입력:
    cin >> a >> b >> c >> d;

    // 겹치는지를 확인합니다.
    if(Intersecting(a, b, c, d)) {
        // 만약 겹치는 부분이 있다면,
        // 두 구역들 중 가장 큰 구역에서 가장 작은 구역을 빼면
        // 오늘 몇 구역이나 청소됐는지 알 수 있습니다.
        cout << max(b, d) - min(a, c);
    }
    else {
        // 만약 겹치는 부분이 없다면,
        // 두 구역들을 전부 더하면
        // 오늘 몇 구역이나 청소됐는지 알 수 있습니다.
        cout << (b - a) + (d - c);
    }

    return 0;
}