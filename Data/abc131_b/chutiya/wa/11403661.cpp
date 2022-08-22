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
if(l<0){
for(int i=0;i<n;i++){
sum+=a[i];
}
cout<<sum;
return 0;
}
else{
for(int i=0;i<n;i++){
sum+=a[i];
}
cout<<sum-a[0];
}
return 0;
}
