#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

const long long N = 1e6 + 17;
ll cnt, ans, lnt, sum, n, l1, x, y, a[N];
pair<ll,ll>pr[N];
vector<ll>v,v2,v3;
map<ll,ll>mp;
bool used[N], t1, t2;
vector<string>sv;

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    for(ll i = 0; i < 5; i ++)
    {
        cin >> a[i];
    }
    for(ll i = 0; i < 5; i ++)
    {
        if(a[i] % 10 != 0)
        {
            x = 10 - (a[i] % 10);
            if(x > n)
            {
                n = x;
            }
        }
    }
    for(ll i = 0; i < 5; i ++)
    {
        if(10 - (a[i] % 10) == n)
        {
            sum += a[i];
            a[i] = 0;
            break;
        }
    }
    for(ll i = 0; i < 5; i++)
    {
        if(a[i] % 10 != 0)
        {
            a[i] += 10 - (a[i] % 10);
        }
    }
    for(ll i = 0; i < 5; i ++)
    {
        sum += a[i];
    }
    cout << sum;
}
