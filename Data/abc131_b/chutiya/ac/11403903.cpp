#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
using ld=long double;
int main(){
int n,l;
cin>>n>>l;
int a[n];
for(int i=0;i<n;i++){
a[i]=i+l;
}
sort(a,a+n);
int sum=0;
if(l>=0){
for(int i=0;i<n;i++){
sum+=a[i];
}
cout<<sum-l;
return 0;
}
else{
for(int i=0;i<n;i++){
sum+=a[i];
}
cout<<sum-min(n+l-1,0);
}
return 0;
}
