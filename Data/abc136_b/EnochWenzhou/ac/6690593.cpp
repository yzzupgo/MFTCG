#include<bits/stdc++.h>
using namespace std;
int n,s=1,len,sum[10],ans;
int main(){
cin>>n;
int m=n;
while(m){
s*=10,len++;
m/=10;
}
s/=10;
if(len>1) ans+=9;
if(len>3) ans+=900;
if(len>5) ans+=90000;
if(len%2==1) ans+=n-s+1;
cout<<ans;
return 0;
}
