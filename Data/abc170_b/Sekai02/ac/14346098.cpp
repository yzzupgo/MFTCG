#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
bool isSolvable(int x, int y){
if(y%2!=0)return false;
if(x==0 && y==0)return true;
if(y<0)return false;
if(x<0 && y>=0)return false;
if(x>=y)return false;
return isSolvable(x-1,y-2)||isSolvable(x-1,y-4);
}
void solve(){
int x, y;
cin>>x>>y;
bool flag=isSolvable(x,y);
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
