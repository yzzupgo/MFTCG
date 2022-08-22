#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define eb emplace_back
#define mp(x,y) make_pair(x,y)
#define mod 1000000007
double PI=3.1415926535897932384626;
#define fi first
#define se second
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
string s=to_string(n);
ll ssize=s.size();
if(s.size()>=6)
{
cout<<(90000+900+10-1);
}
else if(ssize>=5)
{
cout<<(910+(n-9999))-1;
}
else if(ssize>=4)
{
cout<<(910-1);
}
else if(ssize>=3)
{
cout<<(10+(n-99))-1;
}
else if(ssize>=2)
{
cout<<10-1;
}
else
{
cout<<(n)-1;
}
return 0;
}
