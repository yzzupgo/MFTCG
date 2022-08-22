#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int main() {
string S;cin>>S;
int len = S.size();
int X = stoi(S);
int ans;
if(len==1) ans=X;
else if(len==2) ans=9;
else if(len==3) ans=9+(X-100+1);
else if(len==4) ans=909;
else if(len==5) ans=909+(X-1000+1);
else ans=90909;
cout<<ans<<endl;
return 0;
}
