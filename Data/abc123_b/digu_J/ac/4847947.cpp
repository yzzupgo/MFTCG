/*
digu_J - Digvijay Janartha
NIT Hamirpur - INDIA
*/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

template < typename T > using ordered_set = tree < T, null_type, less < T >, rb_tree_tag, tree_order_statistics_node_update >;
template < typename T > using MinPriorityQueue = priority_queue < T, vector < T >, greater < T > >;

#ifndef ONLINE_JUDGE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template < typename Arg1 >
void __f(const char* name, Arg1&& arg1) {
    cout << name << " : " << arg1 << std :: endl;
}
template < typename Arg1, typename... Args >
void __f(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names + 1, ',');
    int len = comma - names;
    for (int i = 0; i < len; ++i) {
        cout << names[i];
    }
    cout <<  " : " << arg1 << " | ";
    __f(comma + 1, args...);
}
#else
#define trace(...)
#endif

typedef double db;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair < ll, ll > pll;
typedef pair < int, int > pii;
typedef vector < ll > vll;
typedef vector < int > vi;

#define eb emplace_back
#define pb push_back
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fast_io() ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ll LINF = LLONG_MAX, base = 1e9, MOD = 1e9 + 7, N = 1e5 + 10, M = 1e3 + 10;
const int INF = INT_MAX;
const db PI = acos(-1);

void test();

int main() {
    fast_io();
    test();
    return 0;
}

void test() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int ans = ((a + 9) / 10) * 10 + ((b + 9) / 10) * 10 + ((c + 9) / 10) * 10 + ((d + 9) / 10) * 10 + ((e + 9) / 10) * 10;
    a %= 10, b %= 10, c %= 10, d %= 10, e %= 10;
    if (!a) {
        a += 10;
    }
    if (!b) {
        b += 10;
    }
    if (!c) {
        c += 10;
    }
    if (!d) {
        d += 10;
    }
    if (!e) {
        e += 10;
    }
    if (a == b and b == c and c == d and d == e and a == 10) {
        cout << ans << "\n";
    } else {
        cout << ans + min(a, min(b, min({c, d, e}))) - 10 << "\n";
    }
}
