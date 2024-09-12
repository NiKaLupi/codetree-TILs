#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin>> a>> b>> c;
    if(a < b && b < c) cout<< b - a - 1;
    else if(a < c && c > b) cout<< c - a - 1;
    else if(b > c) cout<< a - b - 1;
    else cout<< a - c - 1; 
    return 0;
}