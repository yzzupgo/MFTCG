#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,d=1000000,e=0;
int c[10000]={};
cin>>a>>b;
for(int i=0;i<a;i++){
c[i]=b+i;
d=min(d,abs(c[i]));
e=e+c[i];
}
if(e>=0) cout<<e-abs(d)<<"\n";
else cout<<e+abs(d)<<"\n";
}
