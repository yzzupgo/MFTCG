#include<iostream>
using namespace std;
int main(){
    int x[5];
    for(int i = 0; i < 5; ++i) cin >> x[i];
    int min = 10;
    int res;
    for(int i = 0; i < 5; ++i){
        if(x[i] % 10 <= min && x[i] % 10 != 0){min = x[i] % 10;
        res = i;}
    }
    int ans = 0;
    for(int i = 0; i < 5; ++i){
        if(i == res || x[i] % 10 == 0) ans += x[i];
        else ans += x[i] + 10 - x[i] % 10; 
    }
    cout << ans << endl;
}