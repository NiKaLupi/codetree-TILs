#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, x, y;
    cin>> a>> b>> x>> y;

    int pos1 = b - a;
    int pos2 = abs(x - a) + b - y;
    int pos3 = abs(y - a) + b - x;

    if(pos2 < pos3 && pos2 < pos1) cout<< pos2;
    else if(pos1 < pos2 && pos1 < pos3) cout<< pos1;
    else cout<< pos3; 

    return 0;
}