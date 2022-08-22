#include <bits/stdc++.h>
#include <vector>
#include <math.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i,n) for (int i = 0; i < n; i++)
#define fr(i,a,b) for (ll i = a; i < b; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define vvi vector<vi>
#define lli long long int
#define INF 1000000000
#define endl '\n'
typedef long long ll;
using namespace std;
void solve() {
int n;
cin >> n;
int total = n * 1.08;
if(total > 206) {
cout << "so-so";
} else if(total == 206) {
cout << ":(";
} else {
cout << "Yay!";
}
}
int main() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output2.txt", "w", stdout);
#endif
SPEED;
solve();
return 0;
}
