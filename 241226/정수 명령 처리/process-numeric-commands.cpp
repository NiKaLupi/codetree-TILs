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
        else if(str == "size") cout<< s.size()<< endl;
        else if(str == "empty") cout<< s.empty()<< endl;
        else if(str == "pop") cout<< s.top()<< endl, s.pop();
        else cout<< s.top()<< endl;
    }
    return 0;
}