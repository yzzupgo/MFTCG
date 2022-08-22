#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y,i,f=0;
cin>>x>>y;
for(i=1;i<=x;i++){
if((i*2+(x-i)*4)==y){
f=1;
break;
}
}
if(f==1)
cout<<"Yes\n";
else
cout<<"No\n";
return 0;
}
