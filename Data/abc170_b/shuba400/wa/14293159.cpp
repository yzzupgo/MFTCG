#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;
#define ll long long int
#define pb push_back
#define rep(i,j,n) for(ll i = j ; i < n ; i++)
#define per(i,j,n) for(ll i = j ; i >= n ; i--)
#define all(x) x.begin(), x.end()
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vll;
int main(){
ll x,y;
cin >> x >> y;
if(4*x - y >= 0 && (4*x - y) % 2 == 0) cout << "YES";
else cout << "NO";
}
