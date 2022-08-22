// READ & UNDERSTAND
// ll, int overflow, array bounds, memset(0)
// special cases (n=1?), n+1 (1-index)
// do smth instead of nothing & stay organized
// WRITE STUFF DOWN

#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end() 
#define MOD 1000000007

typedef long long ll;
typedef pair <int, int> ii;
typedef pair <ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef long double ld;

ll INF=LLONG_MAX;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    //freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
	int a[5],sum=0; int mx=0;
	for(int i=0; i<5; i++){
		cin >> a[i];
		mx = max(mx,(a[i]%10>0)?10-a[i]%10:0);
		if(a[i]%10)a[i]+=10-a[i]%10;
		sum += a[i];
	}
	cout << sum-mx << endl;
}	
