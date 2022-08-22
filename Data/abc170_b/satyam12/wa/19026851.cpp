#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
int flag=0;
for(int i=1;i<=a;i++){
if((2*i+4*(a-i))==b){
flag=1;
break;}}
if(flag==1)
cout<<"Yes";
else
cout<<"No";}
