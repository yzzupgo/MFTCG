#include <bits/stdc++.h>
using namespace std;
int main(){
int n,l;
cin>>n>>l;
if(l>0) cout<<(2*l+n)*(n-1)/2;
else{
if((l+n)<1) cout<<(2*l+n-2)*(n-1)/2;
else cout<<(2*l+n-1)*n/2;
}
return 0;
}
