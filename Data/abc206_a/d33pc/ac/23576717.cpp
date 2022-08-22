#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vint vector<int>
#define vll vector<ll>
#define vstr vector<string>
#define vvint vector<vector<int> >
#define vvll vector<vector<ll> >
#define vip vector<pair<int,int> >
#define vlp vector<pair<ll,ll> >
#define input(arr) for(auto &x:arr) cin>>x;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
const int N = 100005;
const ll mod = 1000000007;
const ll inf = 1e17;
const long double pi = (acos(-1));
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
double n, rate = 1.08;
double x = 206;
cin >> n;
n = double(n) * rate;
n = int(floor(n));
if(n < 206) {
cout << "Yay!";
} else if(n == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
