#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin>> a>> b>> c>> d;
    if(b >= c && b <= d) cout<< d - a;
    else if(d >= a && d <= b) cout<< b - c;
    else cout<< b - a + d - c;

    return 0;
}