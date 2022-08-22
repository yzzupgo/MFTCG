#include <bits/stdc++.h>
#define for0(i,n) for (int i = 0; i < (int)(n); ++i)
#define for1(i,n) for (int i = 1; i <= (int)(n); ++i)
#define forc(i,l,r) for (int i = (int)(l); i <= (int)(r); ++i)
#define forr0(i,n) for (int i = (int)(n) - 1; i >= 0; --i)
#define forr1(i,n) for (int i = (int)(n); i >= 1; --i)
#define pb push_back
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin, (x).rend()
#define tr(c,i) for(__typeof__((c)).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define sz(a) int((a).size())
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;
int main() {
optimize();
int n;
cin >> n;
if(n * 1.08 < 206) {
cout << "Yay!";
} else if(n * 1.08 > 206) {
cout << ":(";
} else {
cout << "so-so";
}
return 0;
}
