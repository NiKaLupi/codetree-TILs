#include <iostream>
#include <string>
using namespace std;

#define MAX_N 1000
int seat[MAX_N] = {};

int main() {
    int n;
    string s;
    cin >> n >> s; // Read both n and the string s
    for(int i = 0; i < n; i++){
        seat[i] = s[i] - '0';
    }
    int max_dist = 0;
    int min_dist = 1000;
    int x = 0, y = 0;
    for(int i = 0; i < n; i++){
        if(seat[i] == 1){
            int dist = 0;
            int position = 0;
            for(int j = i + 1; j < n; j++){
                if(seat[j] == 1){
                    dist = j - i;
                    position = j;
                    break;
                }       
            }
            if(dist > max_dist) {
                max_dist = dist; // Update max_dist
                x = i;
                y = position;
            }if(dist < min_dist){
                min_dist = y - x;
            }
        }
    }
    if(min_dist < (y - x) / 2) cout<< min_dist;
    else cout << (y - x) / 2;
    return 0;
}