#include <iostream>
using namespace std;

#define MAX_M 100
#define MAX_N 26

char sender[MAX_M];
int unreader[MAX_M];
char users[MAX_N];

int main() {
    int n, m, p;
    cin>> n>> m>> p;

    for(int i = 0; i < n; i++){
        users[i] = 'A' + i;
    }

    for(int i = 0; i < n; i++){
        cin>> sender[i]>> unreader[i];    
    }

    for(int i = p - 1; i < n; i++){
        users[sender[i] - 'A'] = '0';
    }

    if(unreader[p - 1] != 0)  
        for(int i = 0; i < n; i++){
            if(users[i] == 'A' + i) cout<< users[i]<< ' ';
    }
    return 0;
}