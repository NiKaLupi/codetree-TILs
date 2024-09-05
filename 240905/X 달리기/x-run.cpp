#include <iostream>
using namespace std;

int main() {
    int distance;
    cin >> distance;

    int min_time = 10000;
    int max_speed = 1;
    while(true){
        int necessary_moved = (max_speed * max_speed); //반드시 {(최고 속도 * 최고 속도 + 1) - 최고 속도} 거리만큼 이동함
        int time = max_speed * 2 - 1;

        if(necessary_moved > distance) break;

        int have_to_move = distance - necessary_moved;
        //소요된 시간은 최고 속도 * 2 - 1 + 같은 속도에 머무른 시간
        if (have_to_move % max_speed != 0)
            time += have_to_move / max_speed + 1;
        else
            time += have_to_move / max_speed;
        
        if (time < min_time) min_time = time;
        max_speed++;
    }
    cout << min_time;
    return 0;
}