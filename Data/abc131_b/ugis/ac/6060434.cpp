#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF = 1e9;
const int MOD = INF+7;
#define rep(i,N) for(int (i)=0;(i)<(N);++(i))
#define rrep(i,N) for(int (i)=(N-1);(i)>0;--i)
#define FOR(i,j,N) for(int (i)=(j);(i)<(N);++(i))
#define put(n) cout<<(n)<<endl;
#define all(v) v.rbegin(),v.rend()
#define MP make_pair
#define pb push_back
using P = pair<int,int>;
signed main(){
int N, L;
cin >> N >> L;
int MIN = 1e9;
int ans = 0;
bool c = false;
for(int i=1;i<=N;i++){
ans += L+i-1;
}
if(L > 0){
ans -= L;
}
else if(abs(L-1) > N) ans -= (L+N-1);
cout << ans << endl;
}
