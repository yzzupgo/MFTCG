#include<bits/stdc++.h>
using namespace std;
int main(){int x,y,k;
cin>>x>>y;
k=(4*x-y)/2;
k=x-k;
if(4*x-y>=0&&(4*x-y)%2==0&&k>=0){cout<<"Yes";}
else{cout<<"No";}
return 0;}
