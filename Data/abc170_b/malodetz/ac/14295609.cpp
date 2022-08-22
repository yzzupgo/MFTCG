#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define fst first
#define snd second
#define sz(X) (int)(X).size()
#define forn(i,n) for (int i = 0; i < int(n); i++)
#define fornr(i,n) for (int i = int(n) - 1; i >= 0; i--)
#define forab(i,a,b) for(int i = int(a); i < int(b); i++)
#define all(X) X.begin(), X.end()
typedef long long ll;
typedef pair<int, int> pii;
typedef double dbl;
typedef long double ld;
typedef vector<int> vi;
typedef vector<pair<ll, ll>> vpll;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int x, y;
cin >> x >> y;
forab(a, 0, x+1){
if (2*a+4*(x-a)==y){
cout << "Yes\n";
return 0;
}
}
cout << "No\n";
return 0;
}
