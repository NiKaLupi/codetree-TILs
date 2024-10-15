#include <iostream>
using namespace std;
#define MAX_N 1000
int elements[MAX_N];
int main() {
    int n;
    cin>> n;

    int v;
    for(int i = 0; i < n; i++){
        cin>> v;
        elements[i] = v % 2;
    }
    //홀수 시작인 경우
    int sum = 0, odd_num = 0, cnt = 0;
    for(int i = 0; i < n - 1; i++){
        cnt++;
        sum += elements[i];
        if(sum % 2 == 1 && odd_num % 2 == 0 && cnt > 1) odd_num++, sum = 0, cnt = 0;
        else if(sum % 2 == 0 && odd_num % 2 == 1 && cnt > 1) odd_num++, sum = 0, cnt = 0;       
    }
    //짝수 시작인 경우
    int even_num = 0;
    for(int i = 0; i < n - 1; i++){
        cnt++;
        sum += elements[i];
        if(sum % 2 == 0 && even_num % 2 == 0 && cnt > 1) even_num++, sum = 0, cnt = 0;
        else if(sum % 2 == 1 && even_num % 2 == 1 && cnt > 1) even_num++, sum = 0, cnt = 0;       
    }
    if(odd_num > even_num) cout<< odd_num;
    else cout<< even_num;
    return 0;
}