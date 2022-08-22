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
map<ll, ll> m;
int main() {
C
int t=1;
while(t--) {
ll a, b;
cin >> a >> b;
ll x=b/4;
ll y=b/2;
if(a>=x && a<=y) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
}
}
