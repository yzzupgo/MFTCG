#include <bits/stdc++.h>
using namespace std;

int main(){
    int wait[256] = {};
    int Time = 0;
    for (int i = 0; i < 5; i++){
        cin >> wait[i];
    }
    wait[5] = wait[0];
    for (int i = 1; i < 5; i++){
        if (( wait[i] % 10) < (wait[5] % 10)){
            wait[5] = wait[0];
        }
    }

    for ( int i = 1; i < 6; i++){
        Time += wait[i];
        if ( i == 5 ) {
            break;
        }
        while ( Time % 10 != 0 ) {
            Time++;
        }
        cout << i << "サイクル" << Time << endl;
    }

    cout << Time << endl;
}