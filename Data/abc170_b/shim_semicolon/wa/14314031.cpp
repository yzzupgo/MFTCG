#include<bits/stdc++.h>
using namespace std;
#define start ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define f(i,a,n) for( i=a; i<n;i++)
const int N = (int)(1*1e6+10);
typedef long long ss;
int main()
{
int i,j,n,m;
cin>>n>>m;
if(m%2==1)
{
cout<<"No"<<endl;
return 0;
}
if(n*4>=m)
{
cout<<"Yes"<<endl;
return 0;
}
cout<<"No"<<endl;
return 0;
}
