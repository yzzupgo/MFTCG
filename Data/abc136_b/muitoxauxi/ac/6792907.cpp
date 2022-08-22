#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vc vector<char>
#define vt vector<string>
#define si set<int>
#define sc set<char>
#define st set<string>
#define pii pair<int,int>
#define fi first
#define se second
#define pb pushback;
using namespace std;
int main()
{
int n;
cin>>n;
int ans=0;
for(int i=1;i<=n;i++)
{
int tmp=0;
int tmp2=i;
while(tmp2)
{
tmp2/=10;
tmp++;
}
if(tmp&1)ans++;
}
cout<<ans;
return 0;
}
