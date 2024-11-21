#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
    int n;
    string s;
    int v;
    cin>> n;
    list<int> l;
    for(int i = 0; i < n; i++){
        cin>> s;
        if(s == "push_front"){
            cin>> v;
            l.push_front(v);
        }if(s == "push_back"){
            cin>> v;
            l.push_back(v);
        }if(s == "pop_front"){
            cout<< l.front()<< endl;
            l.pop_front();
        }if(s == "pop_back"){
            cout<< l.back()<< endl;
            l.pop_back();
        }if(s == "size"){
            cout<< l.size()<< endl;
        }if(s == "empty"){
            cout<< l.empty()<< endl;
        }if(s == "front"){
            cout<< l.front()<< endl;
        }if(s == "back"){
            cout<< l.back()<< endl;
        }
    }
    return 0;
}