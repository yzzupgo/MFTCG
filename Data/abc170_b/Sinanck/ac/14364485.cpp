#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define PB push_back
#define MP make_pair
#define F first
#define S second
int c[100005];
int main()
{
int a,b;
cin>>a>>b;
if((b-2*a)%2==0)
{
if((b-2*a)/2<=a&&(b-2*a)/2>=0)
{
cout<<"Yes";
}
else
{
cout<<"No";
}
}
else
{
cout<<"No";
}
return 0;
}
