#include <bits/stdc++.h>
using namespace std;
long long a[200000];
long long ll_pow(long long a, long long n){
long long ans = 1;
for(long long i=0; i< n; i++){
ans *= a;
}
return ans;
}
int main(){
int n,i,flag=0;
long long ans=1;
cin >> n;
for(i=0;i<n;i++) cin >> a[i];
for(i=0;i<n;i++){
if(a[i]==0){
flag=1;
ans=0;
}
}
for(i=0;i<n&&flag==0;i++){
ans *= a[i];
if(ans>1000000000000000000){
ans=-1;
flag=1;
}
if(a[i]>=10000000000&&a[i-1]>=10000000000){
ans=-1;
flag=1;
}
}
if(ans>1000000000000000000) ans=-1;
cout<< ans<<endl;
return 0;
}
