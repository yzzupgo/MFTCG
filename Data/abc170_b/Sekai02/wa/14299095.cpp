#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
void solve(){
int x, y;
cin>>x>>y;
if(y>x*4 || y%2!=0 || y<x){cout<<"No"<<endl;return;}
cout<<"Yes"<<endl;
}
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
solve();
return 0;
}
