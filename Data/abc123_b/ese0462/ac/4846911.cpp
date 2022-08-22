#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, a, t = 0, m = 10, m2 = 0;
    for(i=0; i<5; i++){
        cin >> a;
        if(a%10 != 0){
            m = min(m, a%10);
        }
        t += (((a-1)/10) + 1)*10;
    }
    if(m != 10){
        t = t-10+m;
    }
    cout << t;
    return 0;
}