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
if(4*x>=y && 2*x<=y){
cout<<"Yes";
}
else cout<<"No";
return 0;
}
