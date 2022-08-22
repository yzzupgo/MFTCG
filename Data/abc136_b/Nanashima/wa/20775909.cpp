#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define INF ((1LL<<62)-(1LL<<31))
typedef long long ll;
int main()
{
int n;
cin >> n;
string s=to_string(n);
int x=s.size();
int ans;
if(x==1) ans=n;
else if(x==2) ans=9;
else if(x==3) ans=n%100+10;
else if(x==4) ans=909;
else if(x==5) ans=n%10000+910;
else ans=90909;
cout << ans << endl;
return 0;
}
