#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);++i)
#define all(a) (a).begin(),(a).end()
#define dunk(a) cout << (a) << endl
#define rall(a) (a).rbegin(),(a).rend()
const int INF = 2e9;
using namespace std;
using Graph = vector<vector<int>>;
typedef pair<int,int> P;
typedef long long ll;

int main(){
    vector<pair<int,int>> p(5);

    rep(i,5){
        cin >> p[i].second;
        p[i].first = p[i].second %10;
        if(p[i].first == 0) p[i].first = 10;
        p[i].second += 10 - p[i].first;
    }

    sort(all(p));
    reverse(all(p));

    int ans = 0;

    rep(i,4) ans += p[i].second;
    if(p[4].first != 10){
        ans += p[4].second + p[4].first - 10;
    }
    else{
        ans += ans += p[4].second + p[4].first;
    }

    dunk(ans);
}
    
