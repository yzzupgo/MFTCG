#include<bits/stdc++.h>
using namespace std;
#define int long long 
const int INF = 1e9;
const int MOD = INF+7;
#define rep(i,N) for(int (i)=0;(i)<(N);++(i))
#define rrep(i,N) for(int (i)=(N-1);(i)>0;--i)
#define FOR(i,j,N) for(int (i)=(j);(i)<(N);++(i))
#define put(n) cout<<(n)<<endl;
#define all(v) v.begin(),v.end()
#define MP make_pair
#define pb push_back
using P = pair<int,int>;

signed main(){
    int a[5];
    rep(i,5) cin >> a[i];

    int ans = 0;
    int MAX = -1;
    rep(i,5){
        ans += a[i];
        if(a[i] % 10){
            ans += 10 - a[i] % 10;
            MAX = max(MAX,10-a[i]%10);
        }
    }

    put(ans - MAX);
    
}