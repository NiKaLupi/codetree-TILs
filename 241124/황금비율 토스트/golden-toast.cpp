#include <iostream>
#include <list>
using namespace std;

int main() {
    int n, m;
    string s;
    char c;
    cin >> n >> m >> s;

    list<char> l;
    list<char>::iterator it;

    // 초기 리스트 구성
    for (int i = 0; i < n; i++)
        l.push_back(s[i]);

    // 반복자 초기화 (리스트 끝)
    it = l.end();

    // 명령 처리
    for (int i = 0; i < m; i++) {
        cin >> c;
        if (c == 'L') { // 왼쪽 이동
            if (it != l.begin())
                it = prev(it);
        } else if (c == 'R') { // 오른쪽 이동
            if (it != l.end())
                it = next(it);
        } else if (c == 'D') { // 삭제
            if (it != l.end())
                it = l.erase(it); // 삭제 후 반복자 업데이트
        } else if (c == 'P') { // 삽입
            char new_char;
            cin >> new_char;
            l.insert(it, new_char);
        }
    }

    // 결과 출력
    for (it = l.begin(); it != l.end(); it++)
        cout << *it;

    return 0;
}
