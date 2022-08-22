#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define endl "\n"
#define pb push_back
#define PI 3.1415926535897932384626433832795l
#define F first
#define S second
#define mp make_pair
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
#define gcd(a,b) __gcd((a),(b))
#define fill(a,value) memset(a,value,sizeof(a));
#define minn(v) *min_element(v.begin(), v.end());
#define maxx(v) *max_element(v.begin(), v.end());
#define print(x) cout<<(x)<<endl;
#define sum(v) +x accumulate(v.begin(), v.end(),x);
#define debug(x) cout<<#x<<'='<<(x)<<endl;
typedef pair<int,int> pii;
typedef vector<int> vi;
int dig(int x)
{
int ans=0;
while(x>0)
{
ans++;
x/=10;
}
return ans;
}
signed main()
{
fastio;
cout << fixed << setprecision(12);
int n;
cin>>n;
int t=dig(n);
int ans=0;
for(int i=1;i<t;i+=2)
{
ans+=9*(pow(10,i-1));
}
if(t%2)
{
ans+=n-(int)(pow(10,t-1))+1;
}
cout<<ans<<endl;
return 0;
}
