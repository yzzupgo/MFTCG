#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef pair<ll,ll> pll;
#define endl "\n";
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
ll const inf = 1e18;
ll const maxn = 1e6+5;
ll const mod = 1e9+7;
int main(){
fast;
ll x,y;
cin>>x>>y;
if(4*x==y || 2*x==y){
cout<<"No"<<endl;
} else {
cout<<"Yes"<<endl;
}
return 0;
}
