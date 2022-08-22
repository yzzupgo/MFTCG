#include <bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
bool ok=false;
for(int i=0;i<=x;i++){
if(4*x-y==2*i)ok=true;
}
if(ok){
cout<<"Yes"<<endl;
}else{
cout<<"No"<<endl;
}
return 0;
}
