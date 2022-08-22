#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
if(y%2!=0)cout<<"No";
else{
if(4*x-y%2==0 &&(4*x-y>=0) && (y-2*x)%2==0 && (y>=2*x))cout<<"Yes";
else cout<<"No";
}
}
