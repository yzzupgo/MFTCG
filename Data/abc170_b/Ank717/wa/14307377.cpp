#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef pair<ll,ll> pll;
#define mod 1000000007
#define maxn 200001
#define f(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define rf(i,a,b) for(ll i=(ll)(a);i>=(ll)(b);i--)
#define pb(x) push_back((ll)(x))
#define pf(x) push_front((ll)(x))
#define nl cout << "\n";
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll x,y;
cin >> x >> y;
if(y>=2*x && y<=4*x){
cout <<"Yes";
}else{
cout <<"No";
}
}
