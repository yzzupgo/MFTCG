#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long int
#define REP(i,n) for(int i=0;i<n;i++)
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define SORT(a,n) sort(begin(a),begin(a)+n)
#define REV(a,n) reverse(begin(a),begin(a)+n)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
ll n,sum=0,k;
cin>>n>>k;
int a[n],min=INF;
for(int i=0;i<n;i++)
{
a[i]=k+i;
sum+=a[i];
if(abs(a[i])<abs(min))
min=a[i];
}
cout<<sum-k<<endl;
}
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
solve();
}
