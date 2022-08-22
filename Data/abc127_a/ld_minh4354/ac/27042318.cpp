#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fi first
#define se second
#define pb push_back
int a,b;
signed main()
{
ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
cin>>a>>b;
if (a<6) b=0;
else if (a<=12) b=b/2;
cout<<b;
}
