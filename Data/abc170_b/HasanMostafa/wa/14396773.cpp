#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll big=2e6+5;
#define endl "\n";
ll a[6];
int main()
{ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll x,y,d=0;
cin>>x>>y;
d=2;
if(y%2!=0){cout<<"No" ;return 0;}
if(x==0&&y!=x){cout<<"No";return 0;}
for(int i=1;i<=x;++i){ll k=d;
k+=(4*(x-i));
if(k==y){cout<<"Yes";return 0;}
else d+=2;}
cout<<"No";
return 0;
}
