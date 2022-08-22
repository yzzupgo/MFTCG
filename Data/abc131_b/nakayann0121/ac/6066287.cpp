#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<queue>
#include<cstdlib>
using namespace std;
int main(){
int n,l;
cin>>n>>l;
int a;
for(int i=1;i<=n;i++){
if(i==1)a=l;
else{
int x=abs(a),y=(l+i-1);
if(y<x){
a=l+i-1;
}
}
}
int sum=0;
for(int i=1;i<=n;i++){
sum+=l+i-1;
}
cout<<sum-a;
}
