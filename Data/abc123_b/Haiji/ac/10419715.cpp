#include <bits/stdc++.h>
using namespace std;


#define rp(i, k, n) for (int i = k; i < n; i++)
typedef long long ll;
typedef double ld;

ll mod = 1e9 + 7ll;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
const ll inf = 1ll << 60;

int main(){
    vector<int> t;
    int last = 139;
    int lastidx = -1;
    rp(i, 0, 5){
        int a;
        cin >> a;
        t.emplace_back(a);
        if(a%10 != 0 and a%10 <= last%10){
            last = a;
            lastidx = i;
        }
    }
    int ans = 0;
    rp(i, 0, 5){
        if(i != lastidx){
            if(t.at(i)%10 == 0) ans += t.at(i);
            else ans += (t.at(i)/10 + 1) * 10;
        }
    }
    if(lastidx!=-1) ans += t.at(lastidx);
    cout << ans;
    return 0;

    
}
