#include <stdio.h>
#include <bits/stdc++.h>
#include <math.h>
#include <iostream>
using namespace std;
typedef long long ll;
ll mod=1e9+7;
int main(){
ll x,y;
cin>>x>>y;
bool flg=0;
for(int i=0;i<=x;i++){
int t=x-i;
int l=i*4+t*2;
if(l==y){
flg=1;
}
}
if(flg==1){
cout<<"Yes"<<endl;
}
else{
cout<<"No"<<endl;
}
}
