#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define pb push_back
#define f first
#define s second
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int x,y;
cin>>x>>y;
string ans = "No";
for(int a=0;a<=x;a++)
{
int b = x - a;
if((4*a + 2*b)==y)
{
ans="Yes";
break;
}
}
cout<<ans<<endl;
return 0;
}
