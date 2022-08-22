#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(a) a.begin(), a.end()
#define sz(a) (ll)(a.size())
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    ll a[5];
    ll ans = 0;
    
    ll m = 10;
    ll d = 0;
    for(ll i=0; i<5; i++)
    {
        cin >> a[i];

        if(a[i]%10!=0)
        {
            if(a[i]%10 < m)
            {
                m = a[i]%10;
                d = i;
            }
        }
    }

    if(m!=10)
    {
        for(ll i=0; i<5; i++)
        {
            if(i!=d && a[i]%10!=0)
            {
                ans+=(a[i]+10-a[i]%10);
            }

            else if(i!=d)
            {
                ans+=a[i];
            }
        }
    }

    cout << ans+a[d] << endl;

    return 0;
}