#include<bits/stdc++.h>
using namespace std;
int x,y;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
cin>>x>>y;
for(int i=0;i<=x;i++){
if(i*2+(x-i)*4==y){cout<<"Yes\n";return 0;}
}
cout<<"No\n";
}
