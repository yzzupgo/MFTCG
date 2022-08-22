#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main( ){
int n,m;
cin>>n>>m;
if(m%2==0 && (n*2<=m) && (n*4>=m))
cout<<"YES";
else
cout<<"NO";
}
