#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    string  str;
    cin>> sit;
    bool finish = false;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '(') stack.push(1);
        else if(stack.empty == true && str[i] == ')') cout<< "No", finish = true;
        else stack.pop();
        if(finish) break;
    }
    if(stack.empty == false) cout<< "No";
    else cout<< "Yes";
    return 0;
}