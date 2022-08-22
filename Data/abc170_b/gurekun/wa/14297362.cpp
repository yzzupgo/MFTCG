#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
x=x*4;
for(int i=0;i<=x;i++){
x-=2;
if(x==y){
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
}
