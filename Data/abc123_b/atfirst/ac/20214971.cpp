#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repp(i, l, n) for (int i = (l); i < (int)(n); i++)
using ll = long long;

int main(){
    int mi = 10;
    int k = 0;
    int sum = 0;
    vector<int> a(5);
    rep(i,5)    cin >> a[i];
    rep(i,5){
        int t = a[i]%10;
        if(mi > t && t > 0){
            mi = t;
            k = a[i];
        }
    }
    if(mi == 10)     sum += 10;
    rep(i,5){
        sum += (a[i]+9)/10*10;
    }
    cout << sum -10 + k%10 << endl;
}