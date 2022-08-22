#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using pr = pair<int, int>; using prll = pair<ll, ll>;
using st = set<int>; using stll = set<ll>;
using v = vector<int>; using vv = vector<vector<int>>;
using vll = vector<ll>; using vvll = vector<vector<ll>>;
const int INFint = 1e9+1;
const ll INFll = (ll) 1e18+1;
const int MOD = 998244353;
#define pb push_back
#define rep(i,n) for(int i=0; i<n; i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define per(i, n) for (int i=(int) n - 1;i>=0;i--)
#define all(vec) vec.begin(), vec.end()
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define get(n)  int n; cin >> n;
#define getll(n) ll n; cin >> n;
#define pi M_PI
#define fix cout << fixed << setprecision(15)

int trans(int x)
{
    int ans;
    for(int i=1; i<=13; i++)
    {
        if(x<=i*10)
        {
            ans = i * 10;
            break;
        }
    }
    return ans;
}

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int aa = a / 10;
    int bb = b / 10;
    int cc = c / 10;
    int dd = d / 10;
    int ee = e / 10;
    int Min;
    if(a%10!=0) Min = a - aa * 10;
    if(b%10!=0) Min = min(Min, b - bb * 10);
    if(c%10!=0) Min = min(Min, c - cc * 10);
    if(d%10!=0) Min = min(Min, d - dd * 10);
    if(e%10!=0) Min = min(Min, e - ee * 10);
    int sum = trans(a) + trans(b) + trans(c) + trans(d) + trans(e);
    sum = sum - 10 + Min;
    cout << sum << endl;
    return 0;
}