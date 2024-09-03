#include <iostream>
using namespace std;

#define MAX_M 100
#define MAX_N 26

char sender[MAX_M];
int unreader[MAX_M];
char users[MAX_N];

int main() {
    int n, m, p, checkpoint = -1;  // checkpoint 초기화
    cin >> n >> m >> p;

    for(int i = 0; i < n; i++){
        users[i] = 'A' + i;
    }

    for(int i = 0; i < m; i++){
        cin >> sender[i] >> unreader[i];
        if(unreader[i] == 0)
            checkpoint = i; 
    }

    if (checkpoint != -1) {
        for(int i = checkpoint + 1; i < m; i++){
            users[sender[i] - 'A'] = '0';
            //cout<< sender[i]<< ' ';
        }
    }

    for(int i = p - 1; i < m; i++){
        users[sender[i] - 'A'] = '0';
    }

    if (p > 1 && unreader[p - 1] == unreader[p - 2]) {
        if (sender[p - 1] - 'A' + 1 < n) {
            users[sender[p - 1] - 'A' + 1] = '0';
        }
    }
    if(unreader[p - 1] != 0){
        for(int i = 0; i < n; i++){
            if(users[i] != '0') {
                cout << users[i] << ' ';
            }
        }
    }
    return 0;
}