#include <bits/stdc++.h>
using namespace std;

int main(){
    int wait[5] = {};
    int Time = 0;
    for (int i = 0; i < 5; i++){
        cin >> wait[i];
    }

    for ( int i = 0; i < 5; i++){
        Time += wait[i];
        if ( i == 4 ) {
            break;
        }
        while ( Time % 10 != 0 ) {
            Time++;
        }
    }

    cout << Time << endl;
}