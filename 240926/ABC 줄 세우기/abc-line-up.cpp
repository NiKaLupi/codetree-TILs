#include <iostream>

using namespace std;

int minimum_swaps(int n, char people[]) {
    int swap_count = 0;

    // 버블 정렬 알고리즘
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (people[j] > people[j + 1]) {
                // 두 사람의 자리를 바꾸기
                swap(people[j], people[j + 1]);
                swap_count++;
            }
        }
    }

    return swap_count;
}

int main() {
    int n;
    cin >> n;  // 사람 수
    char people[26];  // 최대 26명이므로 배열 크기는 26으로 설정

    for (int i = 0; i < n; i++) {
        cin >> people[i];  // 사람들의 초기 순서 입력
    }

    // 최소 교환 횟수 계산 및 출력
    cout << minimum_swaps(n, people) << endl;

    return 0;
}