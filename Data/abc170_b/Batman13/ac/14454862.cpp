#include<bits/stdc++.h>
using namespace std;
int main() {
int x,y;
cin>>x>>y;
bool f=false;
for(int i=0;i<=x;i++){
for(int j=0;j<=x;j++){
if(i+j==x && 2*i+4*j==y){
cout<<"Yes"<<endl;
f=true;
}
}
}
if(f==false){
cout<<"No"<<endl;
}
return 0;
}
