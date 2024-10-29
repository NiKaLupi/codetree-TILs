#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x[4], y[4];
    cin>> x[0]>> y[0]>> x[1]>> y[1]>> x[2]>> y[2]>> x[3]>> y[3];
    sort(x, x + 4);
    sort(y, y + 4);

    cout<< (x[3] - x[0]) * (y[3] - y[0]);
    return 0;
}