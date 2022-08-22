#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n,l,i,x;
cin>>n>>l;
int a[n+1],sum=0,minx=1000;
for(i=1;i<=n;i++){
a[i]=l+i-1;
sum+=a[i];
}
for(i=1;i<=n;i++){
if(fabs(a[i])<minx) {
minx=fabs(a[i]);
x=a[i];
}
}
cout<<x;
return 0;
}
