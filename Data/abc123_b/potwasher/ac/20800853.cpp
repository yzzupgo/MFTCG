#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[5];
    for(auto& i:a) cin >> i;
    int res = 0, end = 0, endDiff=0,amount=0;
    for(auto& i:a){
        int diff = ceil(i/10.0);
        res+=diff*10;
        if(i%10!=0 && 10-i%10>end){
            end = 10-i%10;
            endDiff = diff*10;
            amount = i;
        }
    }
    cout << res-endDiff+amount << endl;
}