#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n, v;
    string str;
    cin>> n;
    stack<int> s;
    for(int i = 0; i < n; i++){
        cin>> str;
        if(str == "push") cin>> v, s.push(v);
        if(str == "size") cout<< s.size()<< endl;
        if(str == "empty") cout<< s.empty()<< endl;
        if(str == "pop") cout<< s.top()<< endl, s.pop();
        else cout<< s.top();
    }
    return 0;
}