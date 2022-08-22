#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(long long i=0; i<(long long)(n);i++)
#define rep2(i,s,n) for(long long i=(s); i<(long long)(n);i++)
#define mod 1000000007
typedef long long ll;
int main() {
int n,l;cin>>n>>l;
int sum=0,min=mod,absmin=mod;
rep(i,n){
sum+=l+i;
if(abs(l+i)<absmin){
absmin=abs(l+i);
min=l+i;
}
}
cout<<sum-min<<endl;
}
