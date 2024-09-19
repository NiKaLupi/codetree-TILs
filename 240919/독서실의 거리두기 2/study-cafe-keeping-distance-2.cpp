#include <iostream>
using namespace std;

#define MAX_N 1000

int seat[MAX_N] = {};

int main() {
    int n;
    string s;

    cin >> n >> s;

    for (int i = 0; i < n; i++) {
        seat[i] = s[i] - '0';
    }

    int x1 = 0, x2 = 0; 
    int max_distance = 0;
    bool bool1 = true;
    for (int i = 0; i < n; i++) {
        if (seat[i] == 1) {
            for (int j = i + 1; j < n; j++) {
                if (seat[j] == 1) { 
                    int distance = j - i;
                    if (distance > max_distance) {
                        x1 = i, x2 = j;
                        max_distance = distance / 2 + distance % 2;
                        bool1 = true;
                    }
                    break;
                } else if (j - i > max_distance) {
                    x1 = i, x2 = j;
                    max_distance = j - i;
                    bool1 = false;
                }
            }
        }
    }

    //cout<< max_distance<< endl;
    if(bool1) seat[(x1 + x2) / 2] = 1;
    else seat[x2] = 1;
    int min_dis = 10000;
    for (int i = 0; i < n - 1; i++) {
        if (seat[i] == 1) {
            for (int j = i + 1; j < n; j++) {
                if (seat[j] == 1) {
                    if (j - i < min_dis) min_dis = j - i;
                    break;
                }
            }
        }
    }
    /*for(int i = 0; i < n; i++){
        cout<< seat[i];
    }*/
    cout << min_dis;
    return 0;
}