#include<bits/stdc++.h>
using namespace std;
int main(){
int n,ans=0;
cin>>n;
if(n>=9){
ans+=9;
}else{
cout<<n;
}
if(n>=999){
ans+=900;
} else {
cout<<ans+max(0,n-100+1);return 0;
}
if(n>=99999){
ans+=90000;
}else{
cout<<ans+max(0,n-10000+1);return 0;
}
cout<<ans;
return 0;
}
