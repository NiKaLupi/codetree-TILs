#include <iostream>
#include <vector>
#include <algorithm> // for swap
using namespace std;

vector<int> vec;

// 중간값을 찾는 함수
int find_median(int low, int mid, int high) {
    if ((vec[low] > vec[mid] && vec[low] < vec[high]) || (vec[low] < vec[mid] && vec[low] > vec[high]))
        return low;
    if ((vec[mid] > vec[low] && vec[mid] < vec[high]) || (vec[mid] < vec[low] && vec[mid] > vec[high]))
        return mid;
    return high;
}

// 분할 함수: 피벗을 기준으로 배열을 재배열
int partition(int low, int high) {
    int mid = (low + high) / 2;
    int piv_index = find_median(low, mid, high); // 중간값의 인덱스를 찾음
    swap(vec[piv_index], vec[high]); // 피벗을 끝으로 이동
    int pivot = vec[high];           // 피벗 값
    int i = low - 1;                 // 피벗보다 작은 요소를 저장할 위치

    for (int j = low; j < high; j++) {
        if (vec[j] < pivot) {
            i++; // 작은 요소의 위치를 증가
            swap(vec[i], vec[j]);
        }
    }
    // 피벗을 올바른 위치로 이동
    swap(vec[i + 1], vec[high]);
    return i + 1;
}

// 퀵 정렬 함수
void quick_sort(int low, int high) {
    if (low < high) {
        // 분할 작업
        int pi = partition(low, high);

        // 피벗을 기준으로 왼쪽과 오른쪽 부분 배열 재귀적으로 정렬
        quick_sort(low, pi - 1);
        quick_sort(pi + 1, high);
    }
}

int main() {
    int n, v;
    cin >> n; // 배열의 크기 입력

    // 배열 입력
    for (int i = 0; i < n; i++) {
        cin >> v;
        vec.push_back(v);
    }

    // 퀵 정렬 실행
    quick_sort(0, n - 1);

    // 정렬된 배열 출력
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
