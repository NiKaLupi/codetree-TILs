#include <iostream>
using namespace std;
#define MAX_N 26
char line[MAX_N];
int main() {
    int n;
    cin>> n;

    for(int i = 0; i < n; i++){
        cin>> line[i];
    }

    int ex_time = 0;
    for(int i = 0; i < n; i++){
        if(line[i] - 'A' > i){
            char temp_p = line[i];
            for(int j = i - 1; j >= 0; j--){
                line[j + 1] = line[j];
                line[j] = temp_p;
                ex_time++;
                if(line[temp_p - 'A'] == temp_p) break;
            }
        }else if(line[i] - 'A' < i){
            char temp_p = line[i];
            for(int j = i + 1; j < n; j++){
                line[j - 1] = line[j];
                line[j] = temp_p;
                ex_time++;
                if(line[temp_p - 'A'] == temp_p) break;
            }
        }
    }
    cout<< ex_time;
    return 0;
}