#include <iostream>
using namespace std;

int wifi[200];
int houses[100];
int main() {
    int n, m;
    cin>> n>> m;


    for(int i = 0; i < n; i++)
        cin>> houses[i];

    int  wifi_num = 0;
    for(int i = 0; i < n; i++){
        bool is_connected = false;
        if(houses[i] == 1) 
            for(int j = i; j < i + m; j++)
                if(wifi[j] == 1) is_connected = true;
            for(int j = i; j >= i - m; j--)
                if(wifi[j] == 1) is_connected = true;
        if(!is_connected)  
            wifi[i + m] = 1, wifi_num++; 
    }
    cout<< wifi_num;
    return 0;
}