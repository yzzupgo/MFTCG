#include<bits/stdc++.h>
#define rep(i,s,n) for(int i=s;i<n;i++)
using namespace std;
using ll = long long;
int main(){
int x,y;
cin>>x>>y;
rep(c,0,x+1){
int t=x-c;
int asi=c*2+t*4;
if(asi==y){
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
return 0;
}
