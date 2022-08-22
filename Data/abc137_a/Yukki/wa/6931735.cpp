#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
typedef long long ll;
int main() {
int a,b;cin>>a>>b;
int ans=max(a+b,a*b);
ans=(ans,a-b);
cout<<ans<<endl;
}
