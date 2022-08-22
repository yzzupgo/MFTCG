#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
int main(){
int n,l;
cin>>n>>l;
int m=abs(l),sum=0;
for(int i=1;i<=n;i++){
sum+=l+i-1;
if(abs(l+i-1)<abs(m))m=l+i-1;
}
cout<<sum-m<<endl;
}
