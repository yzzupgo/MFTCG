#include <math.h>
#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <tuple>
#include <vector>
#include <cmath>
#include<set>
#include <sstream>
#include <bitset>
#include <queue>
#include <functional>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define ALL(a) (a).begin(),(a).end()
#define MOD 1000000007
#define INF 1000000000000000000
using namespace std;
using ll = long long int;
using Graph = vector<vector<int>>;
ll gcd(ll a, ll b) {
return a % b == 0 ? b : gcd(b, a % b);
}
ll lcm(ll a, ll b) {
return a * b / gcd(a, b);
}
Graph G;
bool on = false;
ll n, m;
string s, t, st;
ll ans = 0, sum = 0;
vector<pair<ll, ll>> hako;
int main() {
cin.tie(nullptr);
cin >> n;
n *= 1.08;
if(206 > n) {
cout << "Yay!";
} else if(206 == n) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
