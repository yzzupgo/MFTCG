#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define vin(v,n) for (int i = 0; i < (int)(n); i++) cin >> (v)[i];
#define vout_sp(v,n) for (int i = 0; i < (int)(n); i++) cout << (v)[i] << " ";
#define vout_nl(v,n) for (int i = 0; i < (int)(n); i++) cout << (v)[i] << endl;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll x, y;
cin >> x >> y;
ll mi = x*2;
ll ma = x*4;
if(y >= mi && y <= ma && y%2==0)
cout << "Yes" << endl;
else
cout <<"No" << endl;
}
