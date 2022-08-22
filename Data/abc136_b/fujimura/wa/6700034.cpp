#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a=n;
int b=1;
int ans=0;
for(int i=0;i<6;i++){
if(a/10!=0) b++;
else break;
a/=10;
}
if(b==1) cout<<n<<endl;
else{
ans+=9;
if(b>3) ans+=900;
if(b>4) ans+=90000;
if(b%5==3) ans+=n-100+1;
else if(b%5==4) ans+=n-10000+1;
cout<<ans<<endl;
}
}
