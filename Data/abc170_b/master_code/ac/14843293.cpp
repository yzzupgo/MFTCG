#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl "\n"
ll input;
int main() {
int t=1;
while(t--)
{
ll x,y;
cin>>x>>y;
for(int i=0;i<=x;i++)
if((i*2+(x-i)*4)==y)
{
cout<<"Yes\n";
return 0;
}
cout<<"No\n";
}
}
