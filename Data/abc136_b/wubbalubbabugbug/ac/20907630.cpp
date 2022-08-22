#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ld = long double;
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define JUGAD freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define pb push_back
#define po pop_back
#define pof pop_front
#define eb emplace_back
#define pf push_front
#define mp make_pair
#define pii pair<int,int>
#define pll pair<lli,lli>
#define pdd pair<ld,ld>
#define pq priority_queue
#define qq queue
#define ff first
#define ss second
#define decimal fixed<<setprecision(20)
const int N = 2e5+1;
const lli MOD = 1e9+7;
lli binpow(lli a,lli b){
lli res=1;
while(b){
if(b&1){res*=a;}
a*=a;
b>>=1;
}
return res;
}
int main(){
FAST;
int n;cin>>n;
int d=0,m=n;
while(m){
d++;m/=10;
}
int dd=1;
int ans=0;
while(true){
if(dd<d){
int x=binpow(10,dd-1);
ans+=9*x;
}
else if(dd==d){
ans+=n-binpow(10,d-1)+1;
break;
}
else{break;}
dd+=2;
}
cout<<ans<<endl;
}
