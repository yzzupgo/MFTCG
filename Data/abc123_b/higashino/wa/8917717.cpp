#include<bits/stdc++.h>
using namespace std;
#define rep(i,j) for(int i = 0;i < j;i++)
#define rep2(i,j) for(int i = 0;i <= j;i++)

int main(void){
    int a[5],min = 10,b;
    rep(i,5){
        cin >> a[i];
        if(min > a[i]%10 && a[i]%10 != 0){
            min = a[i]%10;
            b = a[i];
        }
    }
    int max = 0;
    rep(i,5){
        if(b == a[i])max += b;
        else {
            if(a[i]%10 > 0)max += a[i] - a[i]%10 + 10;
            else max += a[i];
        }
    }
    cout << max;
}