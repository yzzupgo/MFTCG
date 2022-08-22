#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define mod 1000000007
#define fo(i,n) for(int i=1;i<=n;i++)
#define tol(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define tou(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define tr(it,a) for(auto it = a.begin();it!=a.end();it++)
#define gcd(a,b) __gcd(a,b)
#define pq priority_queue
#define fr first
#define sc second
#define sz(x) x.size()
const int inf=0x3f3f3f3f;
bool ispalindrome(string s)
{
ll len=s.length();
for(ll i=0;i<len;i++){
if(s[i]!=s[len-i-1])
return false;
}
return true;
}
long long binpow(long long a, long long b) {
long long res = 1;
while (b > 0) {
if (b & 1)
res = res * a;
a = a * a;
b >>= 1;
}
return res;
}
long long isprime(long long n)
{
for(long long i=2;i<=sqrt(n);i++)
{
if(n%i==0)return 0;
}
return 1;
}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int x,y;
cin>>x>>y;
for(int i=1;i<=x;i++)
{
if((i*2+(x-i)*4==y) ||(i*4+2*(x-i)==y))cout<<"Yes";
return 0;
}
cout<<"No";
return 0;
}
