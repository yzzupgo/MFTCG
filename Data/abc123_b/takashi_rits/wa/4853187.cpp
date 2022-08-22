#include <bits/stdc++.h>
using namespace std;

int main(){
    int wait[] = {};
    int Time = 0;
    for (int i = 0; i < 5; i++){
        cin >> wait[i];
    }

    for ( int i = 0; i < 5; i++){
        Time += wait[i];
        if ( Time % 10 != 0 ) {
            Time++;
        }
    }

    cout << Time << endl;
}