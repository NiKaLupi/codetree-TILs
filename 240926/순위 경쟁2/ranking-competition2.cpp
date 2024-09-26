#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int score_A = 0, score_B = 0;
    char person, leader = 'A';
    int point_change;
    bool joint = true;
    int change = 0;

    for (int i = 0; i < n; i++) {
        cin >> person >> point_change;
        if (person == 'A') {
            score_A += point_change;
        } else {
            score_B += point_change;
        }

        if (score_A > score_B && (leader == 'B' || joint == true)) {
            change++;
            leader = 'A';
        } else if (score_B > score_A && (leader == 'A' || joint == true)) {
            change++;
            leader = 'B';
        } else if (score_A == score_B && !joint) {
            change++;
            joint = true;
        }if (score_A != score_B) {
            joint = false;
        }
        //cout<< score_A<< ' '<< score_B<< endl;
    }

    cout << change;
    return 0;
}