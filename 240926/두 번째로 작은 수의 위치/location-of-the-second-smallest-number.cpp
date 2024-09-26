#include <iostream>
using namespace std;

#define MAX_N 100

int arr[MAX_N];

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int first_min_num = 101, second_min_num = 101; 
    int index = -1;
    bool duplicate = false;  // 두 번째로 작은 수가 중복되는지 확인하는 변수

    for (int i = 0; i < n; i++) {
        if (arr[i] < first_min_num) {
            // 새로운 최소값을 찾았을 때
            second_min_num = first_min_num;
            first_min_num = arr[i];
            index = i;
            duplicate = false;  // 새로 찾은 두 번째 값이 중복되지 않음
        } else if (arr[i] > first_min_num && arr[i] < second_min_num) {
            // 두 번째로 작은 값을 갱신
            second_min_num = arr[i];
            index = i + 1;  // 1-based 인덱스
            duplicate = false;
        } else if (arr[i] == first_min_num) {
            // 두 번째로 작은 값이 중복되는 경우
            duplicate = true;
        }
    }

    // 두 번째로 작은 값이 없거나 중복된 경우
    //cout<< first_min_num<< ' '<< second_min_num<<  ' '<< duplicate;
    if (duplicate || second_min_num == first_min_num) {
        cout << -1 << endl;
    } else {
        cout << index << endl;
    }

    return 0;
}