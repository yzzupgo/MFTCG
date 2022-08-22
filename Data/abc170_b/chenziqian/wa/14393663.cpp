#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
int x,y;
cin>>x>>y;
if((y&1==0)&&x*4>=y&&x*2<=y){
cout<<"Yes"<<endl;
}else{
cout<<"No"<<endl;
}
return 0;
}
