#include<stdio.h>
#include<iostream>
using namespace std;

int a[5];
int main (){
    int ans = 0;
    int mod = 99;
    for(int i=0;i<5;i++) {
        cin >> a[i];
        if(a[i] % 10) {
            mod = min(a[i] % 10, mod);
            ans += 10;
            a[i] = a[i] - ( a[i] % 10 );
        }
        ans += a[i];
    }
    cout << ans - (10 - mod) << endl;
    return 0;
}
