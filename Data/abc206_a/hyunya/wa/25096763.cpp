#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef map<int, int> mii;
typedef long long int ll;
typedef long double ld;
#define all(x) (x).begin(), (x).end()
#define prt(x) #x << ' ' << x
#define sz(x) (int)(x).size()
#define pq priority_queue
#define ub upper_bound
#define lb lower_bound
#define pb push_back
#define vt vector
#define s second
#define f first
const int mod = 1e9 + 7, inf = 1e9, mxn = 1e5 + 5;
int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
ld a;
cin >> a;
a *= 1.08;
a = int(a);
if(a < 206) {
cout << "Yay!";
} else if(a == 206) {
cout << "So-so";
} else {
cout << ":(";
}
}
