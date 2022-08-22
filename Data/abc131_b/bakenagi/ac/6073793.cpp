#include <bits/stdc++.h>
using namespace std;
int main() {
int n,l,ans;
cin>>n>>l;
if(l>0){
ans=l*(n-1)+(n-1)*n/2;
}
else if(l+n-1<0){
ans=l*(n-1)+(n-2)*(n-1)/2;
}
else{
ans=l*n+n*(n-1)/2;
}
cout<<ans;
}
