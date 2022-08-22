#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
const long long N = 1e5 + 17;
ll cnt, lnt, mn = N, mx, a[N], n, m,k, x, y, ans, sum;
pair<ll,ll>pr[N];
vector<ll>v,v2,v3;
map<ll,ll>mp;
bool used[N], t1, t2;
vector<string>sv;
vector<char>vi;
int main()
{
cin >> n >> m;
if(n <= 5)
{
cout << 0;
return 0;
}
if(n >= 6 and n <= 12)
{
cout << n / 2;
return 0;
}
cout << n;
}
