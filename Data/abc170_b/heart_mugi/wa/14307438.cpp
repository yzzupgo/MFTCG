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
rep(i,x+1){
rep(j,x-i+1){
if(i*2+j*4 == y){
cout<<"Yes";
return 0;
}
}
}
cout<<"No";
return 0;
}
