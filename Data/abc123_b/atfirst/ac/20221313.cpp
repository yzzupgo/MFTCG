#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repp(i, l, n) for (int i = (l); i < (int)(n); i++)
using ll = long long;

int main(){
    int sum = 0, ma = 0;
    rep(i,5){
        int a;
        cin >> a;
        int tmp = (a+9)/10*10;
        sum += tmp;
        int res = tmp-a;
        ma = max(res, ma);
    }
    sum -= ma;
    cout << sum << endl;   
}