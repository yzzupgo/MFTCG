#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
if(2*n<=m && 4*n>=m && m%2==0)
cout<<"Yes";
else
cout<<"No";
return 0;
}
