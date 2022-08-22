#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
int x,y;
cin>>x>>y;
bool f=false;
for(int i=0;i<=x;i++){
if(2*i+4*(x-i)==y){
f=true;
break;
}
}
if(f){
cout<<"Yes\n";
}else{
cout<<"No\n";
}
return 0;
}
