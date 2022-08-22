#include <bits/stdc++.h>
using namespace std;
int main (){
int n,l,i;
cin>>n>>l;
int a=1000,b=0,x,c=1;
for(i=0;i<n;i++,l++){
if(a>abs(l)){
a=abs(l);
if(a==0);
else c=abs(l)/a;
}
b+=l;
}
b+=a*c;
cout<<b;
return 0;
}
