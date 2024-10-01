#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int index_R[2] = {-1, -1};
    int index_B[2] = {-1, -1};
    int index_L[2] = {-1, -1};
    char s;

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            cin >> s;
            if(s == 'R') {
                index_R[0] = i;
                index_R[1] = j;
            } else if(s == 'B') {
                index_B[0] = i;
                index_B[1] = j;
            } else if(s == 'L') {
                index_L[0] = i;
                index_L[1] = j;
            }
        }
    }

    int distance = abs(index_B[0] - index_L[0]) + abs(index_B[1] - index_L[1]) - 1;
    if(!((index_R[0] < index_B[0] && index_R[0] < index_L[0]) || (index_R[1] < index_B[1] && index_R[1] < index_L[1]) || (index_R[0] > index_B[0] && index_R[0] > index_L[0]) || (index_R[1] > index_B[1] && index_R[1] > index_L[1]))) 
        if((index_R[0] == index_B[0] && index_R[0] == index_L[0]) || (index_R[1] == index_B[1] && index_R[1] == index_L[1])) {
            distance += 2;
        }

    cout << distance << endl;
    return 0;
}