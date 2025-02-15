#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string str;
    cin>> str;

    stack<int> s;   
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '(') s.push(1);
        else if(i == 0){
            cout<< "No";
            return 0;
        }
        else s.pop();
        if((s.empty() == false && i == str.size() - 1)){
            cout<< "No";
            return 0; 
        }
    }
    cout<< "Yes"; 
    return 0;
}