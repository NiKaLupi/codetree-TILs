#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x[4];
    int y[4];

    for(int i = 0; i < 4; i++){
        cin>> x[i]>> y[i];
    }
    sort(x, x + 4);
    sort(y, y + 4);
    if(x[3] - x[0] > y[3] - y[0]) cout<< (x[3] - x[0]) * (x[3] - x[0]);
    else cout<< (y[3] - y[0]) * (y[3] - y[0]);
    return 0;
}