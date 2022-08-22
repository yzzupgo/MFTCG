#include <bits/stdc++.h>
#include <stdio.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(long long i=0; i<(long long)(n);i++)
#define rep2(i,s,n) for(long long i=s; i<=(long long)(n);i++)
#define repr(i,s,n) for(long long i=s;i>=(long long)(n);i--)
typedef long long ll;
const ll inf = 1e9+7;
const ll mod = 1e9+7;
int main() {
int n,l,sum=0;
cin>>n>>l;
vector<int>L(n);
rep(i,n){
L[i]=l+i;
sum+=L[i];
}
int MINabs=1000,MIN=0;
rep(i,n){
if(MINabs>abs(L[i])){
MINabs=abs(L[i]);
MIN=L[i];
}
}
cout<<sum-MIN<<endl;
}
