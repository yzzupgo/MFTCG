#include<bits/stdc++.h>
using namespace std;

int main(void){
    int a[10], sum = 0, min = 1000;
    for(int i=0;i<5;++i)cin >> a[i];
    for(int i=0;i<5;++i){
        int amari = 0;
        amari = a[i]%10;
        if(amari!=0 && min > amari) min = amari;
        a[i] = (a[i]+9)/10*10;
        sum += a[i];
    }
    cout << sum - (10-min) << endl;
}
