#include <bits/stdc++.h>
#include<set>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back
#define ff first
#define ss second
#define si(x) int(x.size())
#define sum_all(a) ( accumulate ((a).begin(), (a).end(), 0ll))
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))
#define mini(a) ( min_element((a).begin(), (a).end()) - (a).begin())
#define maxi(a) ( max_element((a).begin(), (a).end()) - (a).begin())
void solve() {
ll n;
double price = 1.08 * n;
cout << n << endl;
string ans = "so-so";
if(floor(price) < 206) {
ans = "yay!";
} else if(floor(price) > 206) {
ans = ":(";
}
cout << ans << endl;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
solve();
}
