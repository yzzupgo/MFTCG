#include <iostream>
#include<string>
using namespace std;
int main(){
int n,l,a[200],b[200],A=0,B=100000,C;
cin>>n>>l;
for(int i=0;i<n;i++){
a[i]=(l+i);
b[i]=a[i];
A=(A+a[i]);
if(a[i]<0)b[i]=(a[i]-(a[i]*2));
if(B>(b[i]-0)){
B=(b[i]-0);
C=a[i];
}
}cout<<(A-C)<<endl;
}
