#include<bits/stdc++.h>
using namespace std;
#define int long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
signed main(){
IOS;
int n,l,sum=0,v[205],mx=-500;
cin >> n >> l;
for(int i =1;i<=n;i++){
v[i]=l+i-1;
sum+=v[i];
}
for(int i = 1;i<=n;i++){
if(mx<abs(sum-v[i]))mx=sum-v[i];
}
cout << mx << endl;
return 0;}
