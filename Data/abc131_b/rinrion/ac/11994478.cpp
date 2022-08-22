#include <bits/stdc++.h>
#include <stdio.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(long long i=0; i<(long long)(n);i++)
#define rep2(i,s,n) for(long long i=s; i<=(long long)(n);i++)
#define repr(i,s,n) for(long long i=s;i>=(long long)(n);i--)
typedef long long ll;
const ll inf = 1e18+7;
const ll mod = 1e9+7;
int factorial(int k){
int result=1;
for (int i=1;i<=k;++i){
result*=i;
}
return result;
}
int main() {
int n,l;
cin>>n>>l;
int absmin=10000,sum=0,MIN=0;
rep2(i,1,n){
sum+=l+i-1;
if(absmin>abs(l+i-1)){
absmin=abs(l+i-1);
MIN=l+i-1;
}
}
cout<<sum-MIN<<endl;
}
