#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<set>
#include<vector>
#include<queue>
#include<list>
#include<stack>
using namespace std;
#define ll long long
#define dd cout<<endl
const int mod=1e9+7;
const int nf=1e9+7;
int main()
{
ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
ll int n;
while(cin>>n)
{
int ans=0;
for(int i=1;i<=n;i++)
{
if(to_string(i).size()&1)
ans++;
}
cout<<ans<<endl;
}
return 0;
}
