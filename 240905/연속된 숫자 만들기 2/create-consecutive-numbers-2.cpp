#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin>> a>> b>> c;
    if(a == b - 2 || b == c - 2) cout<< 1;
    else if(a == b - 1 && b== c - 1) cout<< 0;
    else cout<< 2;
    return 0;
}