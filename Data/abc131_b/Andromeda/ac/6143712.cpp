#include<bits/stdc++.h>
using namespace std;
int n,l;
int main(){
cin>>n;
cin>>l;
if(l>=0)
cout<<((2*l+n)*(n-1))/2<<endl;
else if(l+n<=1)
{
cout<<(l+l+n-2)*(n-1)/2<<endl;
}
else
cout<<(l+l+n-1)*n/2<<endl;
}
