#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main( ){
int n,m,a,b;
cin>>n>>m;
string s="NO";
for(a=0;a<=n;a++){
b=n-a;
if(2*a+4*b==m)
s="YES";
}
cout<<s;
}
