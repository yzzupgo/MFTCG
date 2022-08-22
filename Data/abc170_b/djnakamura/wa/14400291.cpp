#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
int main()
{
cin.tie(0);
ios::sync_with_stdio(false);
int x,y,c=0;
cin>>x>>y;
if(y%2!=0){
cout<<"No"<<endl;
}
else if(x<=y/2){
if(y%4==0){
if(y/4<=x) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
else{
if(y/4<x) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
}
return 0;
}
