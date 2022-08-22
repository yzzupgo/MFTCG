#include<bits/stdc++.h>
using namespace std ;
int main (){
int n,l;
cin>>n>>l;
if(n+l-1<0)
cout<<((2*l+n-1)*n/2-(n+l-1))<<'\n';
else if (l<=0 && n+l-1>=0)
cout<<(2*l+n-1)*n/2<<'\n';
else if (n>0 && l>0)
cout<<((2*l+n-1)*n/2-l)<<'\n';
return 0;
}
