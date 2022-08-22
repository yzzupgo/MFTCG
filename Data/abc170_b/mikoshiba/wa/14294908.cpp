#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <stack>
#include <algorithm>
#include <iostream>
#include <string>
#include <map>
#include <queue>
#include <stdio.h>
#include <math.h>
using namespace std;
typedef long long ll;
typedef vector<vector<int>> vvi;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<string>> vvs;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef queue<int> qi;
typedef queue<string> qs;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define repp(i,a,b) for(int i = (a); i <= (b); i++)
#define Rep(i,n) for(int i=n; i >= 0; i--)
#define all(v) v.begin(), v.end()
int main() {
int x, y;
cin >> x >> y;
bool temp = false;
rep(i, x) {
if (2 * x + 2 * i == y) {
temp = true;
break;
}
}
if (temp) cout << "Yes" << endl;
else cout << "No" << endl;
}
