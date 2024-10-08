#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

#define MAX_N 1000

int positive[MAX_N] = {};
int negative[MAX_N] = {};

int main() {
    int n; 
    cin >> n;
    
    int v;

    if(n == 3) {
        int val = 1;
        for(int i = 0; i < n; i++) {
            cin >> v;
            val *= v;
        }
        cout << val;
    } else {
        int pl_num = 0, mi_num = 0;
        for(int i = 0; i < n; i++) {
            cin >> v;
            if(v < 0) {
                negative[mi_num++] = v;
            } else {
                positive[pl_num++] = v;
            }
        }

        sort(positive, positive + pl_num, greater<int>());
        sort(negative, negative + mi_num);

        if(mi_num < 2) {
            // Case with fewer than two negative numbers
            cout << positive[0] * positive[1] * positive[2];
        } else if(pl_num >= 2) {
            // Compare using both positive and negative numbers
            if(positive[0] * positive[1] * positive[2] > positive[0] * negative[0] * negative[1]) {
                cout << positive[0] * positive[1] * positive[2];
            } else {
                cout << positive[0] * negative[0] * negative[1];
            }
        } else if(pl_num == 1) {
            // If only one positive number is available
            cout << negative[0] * negative[1] * positive[0];
        } else {
            // If no positive numbers are available
            cout << negative[0] * negative[1] * negative[2];
        }
    }
    return 0;
}