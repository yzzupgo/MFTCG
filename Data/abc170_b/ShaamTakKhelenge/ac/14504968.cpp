#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define db double
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define endl "\n"
#define mp make_pair
#define f first
#define se second
#define pi 3.14159265358979
ll gcd(ll a, ll b){ if (a == 0) return b; return gcd(b % a, a); }
ll power(ll x, ll y, ll mod = 2e18) {ll ans = 1;x %= mod;while(y){if(y&1) ans = (x * ans) % mod;x = (x * x) % mod;y >>= 1;}return ans;}
ll modInverse(ll a, ll m) { ll m0 = m; ll y = 0, x = 1; if (m == 1) return 0; while (a > 1) { ll q = a / m; ll t = m; m = a % m,a = t; t = y; y = x - q * y; x = t; } if(x < 0) x += m0;return x;}
int takemod(int a, int mod = MOD){a%=mod;if(a<0)a+=mod;return a;}
ll binsearch(std::vector<ll>& nums, ll target) {ll n = nums.size();ll l = 0;ll r = n-1;while(l<=r){ll mid = l+ (r-l)/2;if(nums[mid]==target)return mid;else if(nums[mid]>target)r = mid-1;else l = mid+1;}return -1;}
bool isPowerOfTwo (int x) {return x && (!(x&(x-1))); }
using namespace std;
int main()
{
fastio
ll animals,legs;
cin>>animals>>legs;
if(legs>=2*animals&&legs<=4*animals&&legs%2==0)
cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
