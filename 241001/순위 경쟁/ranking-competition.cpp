#include <iostream>

#define MAX_N 1000  // 더 큰 값을 할당

using namespace std;

int n;
char name[MAX_N];
int value[MAX_N];

int score_a = 0, score_b = 0, score_c = 0;

int Status(int score1, int score2, int score3) {
    if (score1 > score2 && score1 > score3)
        return 1;  // A가 1등
    else if (score2 > score1 && score2 > score3)
        return 2;  // B가 1등
    else if (score3 > score1 && score3 > score2)
        return 3;  // C가 1등
    else if (score1 == score2 && score1 > score3)
        return 4;  // A와 B가 동점, C는 3등
    else if (score2 == score3 && score2 > score1)
        return 5;  // B와 C가 동점, A는 3등
    else if (score1 == score3 && score1 > score2)
        return 6;  // A와 C가 동점, B는 3등
    else
        return 7;  // 모두 동점
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name[i] >> value[i];
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (name[i] == 'A') {
            if (Status(score_a, score_b, score_c) != Status(score_a + value[i], score_b, score_c))
                ans++;

            score_a += value[i];
        } else if (name[i] == 'B') {
            if (Status(score_a, score_b, score_c) != Status(score_a, score_b + value[i], score_c))
                ans++;

            score_b += value[i];
        } else if (name[i] == 'C') {
            if (Status(score_a, score_b, score_c) != Status(score_a, score_b, score_c + value[i]))
                ans++;

            score_c += value[i];
        }
    }

    cout << ans;
    return 0;
}