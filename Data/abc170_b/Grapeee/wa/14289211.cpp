#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define ll long long
#define pb push_back
#define pf push_front
#define Mid ((l+r)/2)
#define pi pair<int,int>
#define pii pair<int,pi>
#define deb(x) cout<<#x<<"="<<x<<endl;
#define go ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int f[10];
int main()
{
go;
int x,y;
cin>>x>>y;
if(y>=2*x&&y<=4*x)
cout<<"Yes";
else
cout<<"No";
return 0;
}
