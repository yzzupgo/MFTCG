#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#define rep(i,n) for(int i=0;i<n;i++)
#define reps(i,n) for(int i=1;i<n;i++)
using namespace std;
int main(){
int n,l;
cin>>n>>l;
vector<int> a(n);
rep(i,n){
a[i]=l+i+1-1;
}
int sum=0;
int min=abs(a[0]);
bool flag;
if(a[0]>=0){
flag=true;
}
else{
flag=false;
}
rep(i,n){
sum+=a[i];
if(min<abs(a[i])){
min=abs(a[i]);
if(a[i]>=0){
flag=true;
}
else{
flag=false;
}
}
}
int ans;
if(flag){
ans=sum-min;
}
else{
ans=sum+min;
}
cout<<ans;
return 0;
}
