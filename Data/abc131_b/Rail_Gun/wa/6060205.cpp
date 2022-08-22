#include<bits/stdc++.h>
using namespace std;
int A[201];
int main(){
int a,b,i,w=0,m=1e9,p;
cin>>a>>b;
for(i=1;i<=a;i++){
A[i]=b+i-1,w+=A[i];
if(abs(A[i])<m)p=i,m=A[i];
}
cout<<w-A[p];
}
