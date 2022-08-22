#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
void solve(){
int x, y;
cin>>x>>y;
bool flag=true;
if(y%2!=0)flag=false;
if(y>x*4)flag=false;
if(y<x)flag=false;
if(!flag)cout<<"No"<<endl;
else cout<<"Yes"<<endl;
}
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
solve();
return 0;
}
