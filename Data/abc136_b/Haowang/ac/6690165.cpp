#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int ans=0;
for(int i=10;i<=1000000;i=i*100){
if(n>=i){
ans+=9*i/10;
}
else if(n>=i/10){
ans+=n-i/10+1;
break;
}
else{
break;
}
}
cout<<ans;
return 0;
}
