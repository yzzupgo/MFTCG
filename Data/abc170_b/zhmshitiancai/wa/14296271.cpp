#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
const int INF=0x3f3f3f3f;
int n,m;
int main()
{
int i;
cin>>n>>m;
if(m&1)
{
cout<<"NO"<<endl;
return 0;
}
m=m/2;
if(m>=n&&m<=n*2)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
return 0;
}
