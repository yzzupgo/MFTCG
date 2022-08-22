#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
if(2*x<=y&&y%2==0&&(y-x*2)%2==0&&((y/2)-x)<=x) cout<<"Yes\n";
else cout<<"No\n";
return 0;
}
