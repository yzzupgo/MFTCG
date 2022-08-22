#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long double
#define vc vector
typedef pair<ll,ll>pairs;
int main() {
std::ios::sync_with_stdio(false);
ll t,n,i,j,k,l,c,f;
vector<ll>a;
ll x,y;
cin>>x>>y;
if((y&1)||(y/2<x)||(2*x<y/2))
cout<<"NO";
else
cout<<"YES";
return 0;
}
