#include<bits/stdc++.h>
using namespace std;
int main(){
int i,j,k,n;
cin>>n;
int m=0;
int ans=0;
k=n;
while(k){
m++;
k/=10;
}
if(m%2==0){
m--;
if(m>=1)ans+=9;
if(m>=3)ans+=900;
if(m>=5)ans+=90000;
}
else{
if(m==1)ans=n-1+1;
else if(m==3)ans=9+n-100+1;
else if(m==5)ans=9+900+n-10000;
}
cout<<ans<<endl;
return 0;
}
