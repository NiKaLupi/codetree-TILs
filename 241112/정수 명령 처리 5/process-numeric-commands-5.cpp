#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        
        if (s == "push_back") {
            int m;
            cin >> m;
            v.push_back(m);
        } 
        else if (s == "pop_back") {
            if (!v.empty()) {
                v.pop_back();
            } else {
                cout << "Error: Cannot pop from empty vector" << endl;
            }
        } 
        else if (s == "size") {
            cout << v.size() << endl;
        } 
        else if (s == "get") {  // Assuming "get" is the command for accessing elements.
            int m;
            cin >> m;
            if (m > 0 && m <= v.size()) {
                cout << v[m - 1] << endl;
            } else {
                cout << "Error: Index out of bounds" << endl;
            }
        } else {
            cout << "Error: Invalid command" << endl;
        }
    }
    
    return 0;
}
