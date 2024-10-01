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

        // Sort arrays for best results
        sort(positive, positive + pl_num, greater<int>());
        sort(negative, negative + mi_num);

        // Now we check if we have at least 3 positive or 3 negative numbers
        if (pl_num >= 3) {
            // Case when there are 3 or more positive numbers
            cout << positive[0] * positive[1] * positive[2];
        } else if (mi_num >= 2 && pl_num >= 1) {
            // Case when there are at least 2 negative numbers and 1 positive number
            cout << negative[0] * negative[1] * positive[0];
        } else if (mi_num >= 3) {
            // Case when there are 3 or more negative numbers
            cout << negative[0] * negative[1] * negative[2];
        } else {
            // Handle cases where there are fewer numbers to use (e.g., n < 3 or not enough negative or positive numbers)
            cout << "Insufficient numbers to compute product";
        }
    }
    return 0;
}