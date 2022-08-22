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
cout<<e-abs(d)<<"\n";
}
