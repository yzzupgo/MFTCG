#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main(){
    vector<int> v(5);
    rep(i,5) cin>>v[i];
    int sum = 0;
    int m = 1000;
    rep(i,5){
        sum += v[i];
        if(v[i]%10!=0) m = min(m,v[i]%10);
        if(v[i]%10!=0) sum += 10-v[i]%10;
    }
    if(m==1000) m = 10;
    cout << sum - (10-m) << endl;
    return 0;
}