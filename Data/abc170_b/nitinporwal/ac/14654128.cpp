#pragma GCC optimize("O3")
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("unroll-loops")
#include <iostream>
#include <bitset>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>
#include <list>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <unordered_set>
#include <climits>
#include <set>
#define C ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
#define INF INT_MAX
#define NINF INT_MIN
#define MOD 1000000007
const double pi=acos(-1);
bool isVowel(char ch) {
if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
return 1;
}
return 0;
}
bool compare(pair<ll, ll> a, pair<ll, ll> b) {
return a.second<b.second;
}
bool isPrime(ll n) {
for(ll i=3; i*i<=n; i+=2) {
if(n%i==0) {
return false;
}
}
return true;
}
map<ll, list<ll>> m;
int main() {
C
int t=1;
while(t--) {
ll n, m, x;
cin >> n >> m;
for(ll i=0; i<=n; i++) {
x=(i*2)+((n-i)*4);
if(x==m) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
}
