#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ll a,b;
cin>>a>>b;
if(b%2!=0){
cout<<"No";
}
else if(a==1){
if(b==2||b==4){
cout<<"Yes";
}
else{
cout<<"No";
}
}
else if(a!=1&&b%2==0){
ll f=b/4;
if(b%4!=0){
f=f+1;
}
ll t=b/2;
ll m=min(f,t);
ll ma=max(f,t);
if(a>=m&&a<=ma){
cout<<"Yes";
}
else{
cout<<"No";
}
}
return 0;
}
