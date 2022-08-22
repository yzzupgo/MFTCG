#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int ans=0;
for(int i=10;i<100000;i=i*100){
if(n>i){
ans+=9*i/10;
}
else{
ans+=n-i/10+1;
}
}
cout<<ans;
return 0;
}
