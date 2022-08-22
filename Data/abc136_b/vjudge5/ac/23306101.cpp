#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define FOR(i,a,b) for (int i = a; i <= b; i++)
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
int n; cin>>n;
int ans = n;
if(n < 10) ans = n;
else if(n/10 < 10) ans = 9;
else if(n/100 < 10) ans -= 90;
else if(n/1000 < 10) ans = 909;
else if(n/10000 < 10) ans -= 9090;
else ans = 90909;
cout<<ans<<endl;
return 0;
}
