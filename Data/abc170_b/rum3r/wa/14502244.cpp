#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#define setbits(x) __builtin_popcountll(x)
#define mod 1000000007
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define inf 1e18
#define ps(x,y) fixed<<setprecision(y)<<x
using namespace std;
int main()
{
FIO;
int x,y; cin>>x>>y;
int flag =1;
if(4*x>=y && 2*x<=y){
for(int i=0;i<=x;i++)
if(4*x-4*i>=y || 2*x+2*i<=y){
cout<<"Yes"; flag = 0; break;
}
}
if(flag)cout<<"No";
return 0;
}
