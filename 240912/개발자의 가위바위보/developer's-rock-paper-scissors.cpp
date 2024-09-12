#include <iostream>
using namespace std;

#define MAX_N 100

int p1[MAX_N] = {}; 
int p2[MAX_N] = {};

int main() {
    int n;
    cin >> n;

    // p1, p2 입력 받기
    for(int i = 0; i < n; i++) {
        cin >> p1[i] >> p2[i];
    }

    int max_win = 0;

    // i와 j는 각각 가위(1), 바위(2), 보(3)를 나타냄
    for(int i = 1; i <= 3; i++) {
        for(int j = 1; j <= 3; j++) {
            if(i == j) continue;  // 같은 경우는 무의미하므로 건너뜀

            int win = 0;

            // 승리 계산
            for(int k = 0; k < n; k++) {
                // 가위바위보 승리 규칙 적용
                if((p1[k] == i && p2[k] == j) ||   // i가 j를 이김
                   (p1[k] == j && p2[k] == i)) {  // j가 i를 이김
                    win++;
                }
            }

            // 최대 승리 횟수 갱신
            if(win > max_win) max_win = win;
        }
    }

    cout << max_win;
    return 0;
}