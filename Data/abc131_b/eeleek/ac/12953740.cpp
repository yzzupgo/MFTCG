#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
int main() {
int n,l;
cin>>n>>l;
int ans=n*l-n+(1+n)*n/2;
if(l+n-1<0)cout<<ans-(l+n-1)<<endl;
else if(0<l)cout<<ans-l<<endl;
else cout<<ans<<endl;
}
