#include <iostream>
#define MAX_N 100
using namespace std;

int houses[2][MAX_N];

int main() {
    int n; 
    cin >> n;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < n; j++) {
            cin >> houses[i][j];
        }
    }

    int min_dis = 0;
    for(int i = 0; i < n - 1; i++) {
        int runners = houses[0][i] - houses[1][i];  // 초과 러너 수 계산
        if(runners > 0) {
            int house_index = i + 1;
            while(runners > 0 && house_index < n) {
                int deficit = houses[1][house_index] - houses[0][house_index];  // 부족한 러너 수 계산
                if(deficit > 0) {
                    int transfer = min(runners, deficit);  // 이동시킬 러너의 수 결정
                    houses[1][house_index] -= transfer;   // 집의 부족분 업데이트
                    runners -= transfer;                 // 남은 초과 러너 수 업데이트
                    min_dis += transfer * (house_index - i); // 이동 거리 업데이트
                }
                house_index++;
            }
        }
    }
    cout << min_dis;
    return 0;
}