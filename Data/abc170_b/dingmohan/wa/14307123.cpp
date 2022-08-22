#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
for(int i=1;i<=y/2;i++){
if(i*2+(x-i)*4==y){
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
return 0;
}
