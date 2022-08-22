#include<bits/stdc++.h>
using namespace std;
int n,m;
int main()
{
cin>>n>>m;
if(n*4<m)cout<<"No",exit(0);
if(n*2!=m&&n*4!=m)
{
cout<<"Yes";
exit(0);
}
cout<<"No";
}
