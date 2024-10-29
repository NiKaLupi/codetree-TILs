#include <iostream>
#include <algorithm>
using namespace std;
int values[7];
int main() {
    int a, b, c;

    for(int i = 0; i < 7; i++){
        cin>> values[i];
    }
    sort(values, values + 7);

    a = values[0];

    if(values[1] - a == values[2] || values[1] == values[2]) b = values[2];
    if(values[2] - a == values[1]) b = values[1];
    else c = values[2], b = values[6] - c - a;
    if(c != values[2]) c = values[6] - a - b;
    //cout<< values[2] - a<< endl;
    cout<< a<< ' '<< b<< ' '<< c;

    return 0;
}