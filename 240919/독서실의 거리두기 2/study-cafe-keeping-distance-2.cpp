#include <iostream>
using namespace std;

#define MAX_N 1000

int seat[MAX_N] = {};

int main() {
    int n;

    string s;

    cin>> n>> s;

    for(int i = 0; i < n; i++){
        seat[i] = s[i] - '0';
    }
    int x1 = 0, x2 = 0; 
    int max_distance = 0;
    for(int i = 0; i < n; i++){
        if(seat[i] == 1){
            int distance = 0;
            for(int j = i + 1; j < n; j++){
                if(seat[j] == 1){ 
                    distance = j - i;
                    if(distance > max_distance){
                        x1 = i, x2 = j;
                        max_distance = distance / 2 + max_distance % 2 - 1;
                        break;
                    }
                }else if(j - i - 1> max_distance) x1 = i, x2 = j, max_distance = j - i - 1;
            }
        }
    }
    seat[(x1 + x2) / 2 + (x1 + x2) % 2] = 1;
    int min_dis = 10000;
    for(int i = 0; i < n - 1; i++){
        if(seat[i] == 1)    
            for(int j = i + 1; j < n; j++){
                if(seat[j] == 1){
                    if(j - i < min_dis) min_dis = j - i;
                }
            }
    }
    cout<< min_dis;
    return 0;
}