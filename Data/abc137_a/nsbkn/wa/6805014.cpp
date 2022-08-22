#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i,N) for (int i = 0; i < (N); ++i)
int main(){
int a,b,c,d,e,ans;
cin>>a>>b;
c=a+b;
d=a*b;
e=a-b;
ans=max(b,c);
ans=max(ans,d);
cout<<ans<<endl;
}
