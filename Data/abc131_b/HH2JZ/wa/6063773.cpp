#include <bits/stdc++.h>
using namespace std;
int a[205];
int main(){
int n,m,i,pos,mn=9999999,x=0;
cin>>n>>m;
for(i=1;i<=n;i++){
a[i]=m+i-1;
if(abs(a[i])<mn){
mn=a[i];
pos=i;
}
}
for(i=1;i<=n;i++){
if(i!=pos) x+=a[i];
}
cout<<x;
return 0;
}
