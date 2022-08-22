#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
int x,y;
cin>>x>>y;
int a=(4*x-y)/2;
bool f=false;
for(int i=0;i<=a;i++){
if(i==a){
f=true;
}
}
if(f){
cout<<"Yes\n";
}else{
cout<<"No\n";
}
return 0;
}
