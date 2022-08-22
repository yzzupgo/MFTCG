#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<n;i++)
int main() {
int a,b;cin>>a>>b;
int ans=max(a+b,a-b);
ans=max(ans,a*b);
cout<<ans<<endl;
return 0;
}
