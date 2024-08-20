#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, a1, b1, c1, d1;
    cin>> a>> b>> c>> d>> a1>> b1>> c1>> d1;

    if(b < a1 || c < a1 || b1 < a || c1 < a){
        cout<< "nonoverlapping";
    }else{
        cout<< "overlapping";
    }
    return 0;
}