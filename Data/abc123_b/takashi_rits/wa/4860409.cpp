#include <bits/stdc++.h>
using namespace std;

int main(){
    int wait[6] = {};
    int Time = 0;
    for (int i = 0; i < 5; i++){
        cin >> wait[i];
    }

    wait[5] = wait[0];
    for (int i = 1; i < 5; i++){
        if ((wait[i] % 10) < (wait[5] % 10)
            && (wait[i] % 10) != 0 ){
            wait[5] = wait[i];
        }
    }

    for (int i = 0; i < 5; i++){
        if ( wait[i] == wait[5] ) {
            wait[i] = 0;
        }
    }

    for (int i; i < 6; i++){
        cout << wait[i] << endl;
    }

    for ( int i = 0; i < 6; i++){
        Time += wait[i];
        if ( i == 5 ) {
            break;
        }
        while ( Time % 10 != 0 ) {
            Time++;
        }
    }

    cout << Time << endl;
}