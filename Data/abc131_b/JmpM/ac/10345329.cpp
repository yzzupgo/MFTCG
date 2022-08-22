#include <bits/stdc++.h>
#define cout16 cout << setprecision(16)
#define rep(i,n) for(int i=0;i<n;i++ )
#define rep2(i,f,n) for(int i=f;i<n;i++ )
#define MAX(A) *max_element(A.begin(),A.end())
#define MIN(A) *min_element(A.begin(),A.end())
#define SORT(A) sort(A.begin(),A.end())
#define REV(A) reverse(A.begin(),A.end())
typedef long long int ll;
using vi = std::vector<int>;
using vvi = std::vector<std::vector<int>>;
using vll = std::vector<ll>;
using vvll = std::vector<std::vector<ll>>;
using P = std::pair<int,int>;
using vp = std::vector<P>;
using namespace std;
#define INF 1001001001
#define LL_INF 1001001001001001001
#define fi first
#define se second
int main(void) {
int n,l; cin >> n >> l;
vi t(n);
rep(i,n) t[i]=l+i;
int mn_ptr;
int mn=INF;
rep(i,n){
int now = abs(t[i]);
if(now<mn){
mn_ptr = i;
mn = now;
}
}
int ans = 0;
rep(i,n){
if(i==mn_ptr) continue;
ans += t[i];
}
cout << ans << endl;
}
