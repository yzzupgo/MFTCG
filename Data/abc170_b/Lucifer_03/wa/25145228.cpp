#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main( ){
int n,m;
cin>>n>>m;
if(m%2==0 && 2*n<=m && 4*n>=m)
cout<<"YES";
else
cout<<"NO";
}
