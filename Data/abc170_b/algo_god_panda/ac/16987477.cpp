#include<iostream>
#include<cstring>
#include<vector>
#include<sstream>
#include<cmath>
#include<algorithm>
#include<bitset>
#include<map>
#include<utility>
#include<climits>
#include<set>
using namespace std;
#define ll long long
void solve(){
int x,y;cin>>x>>y;
if(y%2 or 4*x<y or 2*x>y)
{
cout<<"No";
return;
}
cout<<"Yes";
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
int t=1;
for(int i=1;i<=t;i++){
solve();
}
return 0;
}
