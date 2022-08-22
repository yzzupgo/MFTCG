#include <bits/stdc++.h>
using namespace std;
int main() {
int n,l;
cin>>n>>l;
int sum=n*(2*l+n-1)/2;
if(l<=0 && l+n-1>=0){
cout<<sum<<endl;}
else if(l>0){
cout<<sum<<endl;}
else{
cout<<sum -(l+n-1)<<endl;}
}
