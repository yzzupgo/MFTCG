#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[5], i;
    int x = 9, d, p, s = 0;
    for(i = 0; i < 5; i++){
        cin >> a[i];
        d = a[i] / 10;
        p = a[i] % 10;
        if(p == 0){
            s += d * 10;
        }
        else{
            s += (d+1) * 10;
            if(p < x) x = p;
        }
    }
    s -= 10 - x;
    cout << s << endl;
}