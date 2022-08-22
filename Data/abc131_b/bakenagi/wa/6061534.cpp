#include <bits/stdc++.h>
using namespace std;
int main() {
int n,l,ans;
cin>>n>>l;
if(l>0){
ans=(l-1)*(n-1)+(n+1)*n/2-1;
}
else if(l+n-1<0){
ans=(l-1)*(n-1)+n*(n-1)/2;
}
else{
(l-1)*n+n*(n+1)/2;
}
cout<<ans;
}
