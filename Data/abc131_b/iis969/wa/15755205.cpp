#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i,n) for(int i=0;i<(n);++i)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define all(x) (x).begin(), (x).end()
#define PI 3.14159265358979323846264338327950L
using namespace std;
typedef long long ll;
typedef long double ld;
int main() {
int n,l;
cin>>n>>l;
int ans=0,mini=100;
rep(i,n){
ans+=l+i;
mini=min(mini,abs(l+i));
}
if(n>abs(l)) cout<<ans-mini;
else cout<<ans+mini;
}
