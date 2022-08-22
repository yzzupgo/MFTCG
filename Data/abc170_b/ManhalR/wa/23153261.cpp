#include <bits/stdc++.h>
#define mod 1000000007
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define preci(x,y) fixed<<setprecision(y)<<x
#define ll long long
#define ull unsigned long long
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
inline void file_io(){
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
int main(int argc, char const *argv[])
{
file_io();
boost;
int x,y;
cin>>x>>y;
string ans = "No\n";
for(int i=1; i<=x; i++){
if(2*i + 4*(x-i) == y){
ans = "Yes\n";
}
}
cout<<ans<<"\n";
return 0;
}
