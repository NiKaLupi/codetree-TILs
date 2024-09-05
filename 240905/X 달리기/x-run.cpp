#include <iostream>
using namespace std;

int main() {
    int distance;
    cin >> distance;

    int min_time = 10000;
    for (int i = 0; i < distance; i++) {
        int speed = 1;
        int position = 0;
        int time = 10000;
        bool acceleration = true;
        for (int j = 0; j < distance; j++) {
            if (i == j) acceleration = false;
            if (acceleration) ++speed;
            else if(speed > 1)--speed;
            position += speed;
            if (position == distance) {
                time = j + 1;
                break;
            }
        }
        if (time < min_time) min_time = time;
        //cout<< position<< ' ';
    }
    cout << min_time;
    return 0;
}