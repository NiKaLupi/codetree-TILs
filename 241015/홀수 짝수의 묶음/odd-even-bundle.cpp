#include <iostream>
using namespace std;
#define MAX_N 1000
int elements[MAX_N];
int main() {
    int n;
    cin>> n;

    int v, odd_num = 0, even_num = 0;
    for(int i = 0; i < n; i++){
        cin>> v;
        if(v % 2 == 0) even_num++;
        else odd_num++;
    }
    if(odd_num - even_num == 1 || odd_num - even_num == -1) cout<< n;
    else if(odd_num == even_num) cout<< n;
    else if(n == 2) cout<< odd_num + even_num * 2 - 1; 
    else if(odd_num == 0) cout<< 1;
    else{
        if(odd_num == 1 ) cout<< 3;
        else if(odd_num < even_num) cout<< odd_num * 2 + 1;
        //else cout<< even_num * 2 + (odd_num - even_num)
    }
    return 0;
}