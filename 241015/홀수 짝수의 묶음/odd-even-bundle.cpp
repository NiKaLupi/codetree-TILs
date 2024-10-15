#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int v, odd_num = 0, even_num = 0;
    
    // 입력받으면서 짝수와 홀수의 개수를 셈
    for (int i = 0; i < n; i++) {
        cin >> v;
        if (v % 2 == 0) even_num++;
        else odd_num++;
    }
    
    // 짝수와 홀수 중 더 적은 값이 기본적으로 교대로 배치 가능한 묶음 수의 절반을 차지
    int max_pairs = min(even_num, odd_num);
    
    // 교대가 가능한 최대 묶음 수는 짝수와 홀수가 각각 한 번씩 번갈아 나오는 방식이므로
    // 기본적으로 `max_pairs * 2`개의 묶음이 가능함
    int max_groups = max_pairs * 2;
    
    // 만약 짝수나 홀수가 남는다면 하나 더 묶을 수 있음
    if (even_num > odd_num) max_groups++;
    
    cout << max_groups << endl;
    
    return 0;
}