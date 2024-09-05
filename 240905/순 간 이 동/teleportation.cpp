#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, x, y;
    cin>> a>> b>> x>> y;

    int pos1 = abs(b - a);
    int pos2 = abs(x - a) + abs(b - y);
    int pos3 = abs(y - a) + abs(b - x);

    if(pos2 < pos3 && pos2 < pos1 && pos2 >= 0) cout<< pos2;
    else if(pos1 < pos2 && pos1 < pos3 && pos1 >= 0) cout<< pos1;
    else cout<< pos3; 

    return 0;
}