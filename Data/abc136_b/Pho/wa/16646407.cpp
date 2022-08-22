#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
ll a;
cin>>a;
ll b=0;
ll c=10;
for(ll i=1;i<7;i++){
if(a<c){
b=i;
break;
}
c=c*10;
}
ll d=0;
if(b==1){
d=a;
}
else{
ll e=9;
for(ll i=1;i<=b-1;){
d+=e;
e=e*81;
i=i+2;
}
if(b%2==1){
d+=a-c/10+1;
}
}
cout<<d<<endl;
return 0;
}
