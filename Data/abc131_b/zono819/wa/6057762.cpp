#include<bits/stdc++.h>
using namespace std;
int main(){
int n,l;
cin>>n>>l;
int mini=30000;
int minus;
int sum=0;
for(int i=1;i<=n;i++){
sum+=l+i-1;
if(abs(l+i-1)<mini){mini=abs(l+i-1);minus=l+i-1;}
}
cout<<sum-mini;
}
