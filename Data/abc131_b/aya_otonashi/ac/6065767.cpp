#include<bits/stdc++.h>
using namespace std;
#define int long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
signed main(){
IOS;
int n,l,sum=0,v[205],mn=500,res=0;
cin >> n >> l;
for(int i =1;i<=n;i++){
v[i]=l+i-1;
sum+=v[i];
}
for(int i = 1;i<=n;i++){
if(mn>abs(v[i])){mn=abs(v[i]);res=v[i];}
}
cout << sum-res << endl;
return 0;}
