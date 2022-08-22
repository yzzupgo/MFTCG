#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int count=0;
if(n<10) count=n;
else{
count+=9;
if(n>100){
if(n<10000) count+=(n-100)+1;
else{
count+=1000-100;
if(n<99999) count+=n-9999;
else count+=100000-10000;
}
}
}
cout<<count<<endl;
}
