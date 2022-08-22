#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
bool res=false;
for(int i=1;i<=x;i++){
int b=x-i;
if((2*b+4*i)==y)
res=true;
}
if(res)
cout<<"Yes";
else
cout<<"No";
return 0;
}
