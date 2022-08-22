#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
void solve(){
int x, y;
bool flag=true;
cin>>x>>y;
if(y%2!=0)flag=false;
if(y<=x)flag=false;
if(x*4<y)flag=false;
if(flag)cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
solve();
return 0;
}
