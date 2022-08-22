#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll big=2e6+5;
#define endl "\n";
ll a[106];
int main()
{ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll x,y,a,b;
cin>>x>>y;
for(a=0;a<=x;a++){
b=abs(x-a);
ll k=a*2+b*4;
if(k==y){cout<<"Yes\n";return 0;}
}
cout<<"No\n";
return 0;
}
