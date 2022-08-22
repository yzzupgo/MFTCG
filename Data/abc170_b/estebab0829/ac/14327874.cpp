#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y,a,b;
cin>>x>>y;
for(int i=0;i<=x;i++){
a=i;
b=x-i;
if((2*a+4*b)==y){
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
}
