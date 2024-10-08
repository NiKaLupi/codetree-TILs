#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

#define MAX_N 1000

int positive[MAX_N] = {};
int negative[MAX_N] = {};

int main() {
    int n; 
    cin >> n;
    
    int v;

    if(n == 3) {
        int val = 1;
        for(int i = 0; i < n; i++) {
            cin >> v;
            val *= v;
        }
        cout << val;
    } else {
        int pl_num = 0, mi_num = 0;
        for(int i = 0; i < n; i++) {
            cin >> v;
            if(v < 0) {
                negative[mi_num++] = v;
            } else {
                positive[pl_num++] = v;
            }
        }

        // 배열의 크기 검사를 추가하여 런타임 에러 방지
        if (pl_num >= 3) {
            sort(positive, positive + pl_num, greater<int>());
        }
        if (mi_num >= 2) {
            sort(negative, negative + mi_num);
        }

        // 양수의 개수가 3개 이상인 경우 처리
        if (pl_num >= 3) {
            cout << positive[0] * positive[1] * positive[2];
        } 
        // 양수 2개와 음수 2개 이상 있는 경우 비교
        else if (pl_num >= 2 && mi_num >= 2) {
            cout << max(positive[0] * positive[1] * positive[2], positive[0] * negative[0] * negative[1]);
        }
        // 양수 1개와 음수 2개 있는 경우 처리
        else if (pl_num == 1 && mi_num >= 2) {
            cout << positive[0] * negative[0] * negative[1];
        } 
        // 음수가 3개 이상인 경우 처리
        else if (mi_num >= 3) {
            cout << negative[mi_num - 1] * negative[mi_num - 2] * negative[mi_num - 3];
        } 
        // 충분한 수가 없는 경우 처리
        else {
            cout << "Not enough numbers to calculate the product";
        }
    }
    return 0;
}