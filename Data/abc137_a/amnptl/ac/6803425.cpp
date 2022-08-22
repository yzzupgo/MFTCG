#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD (1000000007);
int main()
{
ll a,b; cin>>a>>b;
ll ans = max({(a+b),(a-b),(a*b)});
cout<<ans<<endl;
return 0;
}
