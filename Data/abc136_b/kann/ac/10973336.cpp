#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>
#include <stdio.h>
#include <numeric>
#include <cmath>
#include <limits>
#include <bitset>
#include <iterator>
#include <map>
#include <unordered_map>
#include <queue>
#include <set>
#include<deque>
#include <regex>
#include <list>
#include <unordered_set>
#define rep(i,n) for(ll i=0;i<(n); ++i)
#define per(i,n) for(ll i=n-1;i>=0; --i)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define _GLIBCXX_DEBUG
using namespace std;
struct __INIT { __INIT() {cin.tie(nullptr); ios::sync_with_stdio(false);} } __init;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
typedef long long ll;
const ll MOD = 1000000007;
ll getDigit(ll n) {
ll cnt = 0;
while (n != 0) {
n /= 10;
cnt++;
}
return cnt;
}
ll gcd(ll a, ll b) {
if (b == 0) return a;
return gcd(b, a % b);
}
typedef pair<ll,ll> pair_t;
bool PSecComp(const pair_t& a, const pair_t& b) {
if (a.second == b.second)return a.first > b.first;
else {
return a.second > b.second;
}
}
int main(){
ll n;
cin >> n;
ll tmp = getDigit(n);
cout << (tmp % 2 == 1 ? ( n - pow(10,tmp-1) +1) : 0) + (pow(100,ceil((tmp-1)/2.0))-1)/11 << endl;
}
