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
else{
ll f=b/4;
ll t=b/2;
ll m=min(f,t);
if(a<=m){
cout<<"No";
}
else{
cout<<"Yes";
}
}
return 0;
}
