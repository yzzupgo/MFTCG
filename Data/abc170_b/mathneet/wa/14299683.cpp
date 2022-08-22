#include<bits/stdc++.h>
using namespace std;
int main(){
long long x,y;
cin>>x>>y;
long long ans=0;
if((4*x-y)%2==0&&(4*x-y>=0)&&(y-2*x)>=0){
ans=1;
}
if(ans==1){
cout<<"YES"<<endl;
}
else{
cout<<"NO"<<endl;
}
return 0;
}
