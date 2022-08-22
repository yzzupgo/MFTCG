#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int x,y,res,c=0;
cin>>x>>y;
if(x>y) cout<<"No";
else{
for(int i=0;i<=x;i++){
for(int j=0;j<=x;j++){
res=(2*i)+(4*j);
if(res==y){
c++;
}
}
}
if(c>0) cout<<"Yes";
else cout<<"No";
}
}
