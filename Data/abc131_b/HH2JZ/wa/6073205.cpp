#include <bits/stdc++.h>
using namespace std;
int main(){
int n,l;
cin>>n>>l;
if(l>0) cout<<l*(n-1)+n*(n-1)/2;
else{
if((l+n)<1) cout<<l*n+n*(n+1)/2+n-l-1;
else cout<<n*l+n*(n-1)/2;
}
return 0;
}
