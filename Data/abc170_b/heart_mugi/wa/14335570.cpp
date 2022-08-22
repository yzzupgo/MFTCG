#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
#define rep(i,n) for (int i=0; i<n; i++)
using namespace std;
using ll = long long;
using ld = long double;
using P = pair<int, int>;
ll a,b,c,d,n,m,k;
string s;
int main() {
cin.tie(0);
ios::sync_with_stdio(false);
ll x,y;
cin>>x>>y;
if(x!=y){
for(int i=x; i>=0; i--){
ll yy = (y-2*i);
if(yy==0){
cout<<"Yes";
return 0;
}
if(x-i != 0){
if(yy/(x-i)==4){
cout<<"Yes";
return 0;
}
}
}
}
cout<<"No";
return 0;
}
