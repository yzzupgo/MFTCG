#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int n,m; cin>>n>>m;
int mi=2*n;
int mx=4*n;
if(m>=mi && m<=mx && m%2==0)
{
cout<<"Yes";
}
else{
cout<<"No";
}
}
