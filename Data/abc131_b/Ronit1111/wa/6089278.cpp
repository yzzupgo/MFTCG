#include<bits/stdc++.h>
using namespace std;
int main(){
int n,l;
cin>>n>>l;
int sum = n*l - n + (n*(n+1))/2;
if(l>0)
cout<<sum - l;
else if(sum<0){
cout<<sum-(l+n-1);
}
else if(l==0)
cout<<sum;
else if(l<0 && sum>0)
cout<<sum;
return 0;
}
