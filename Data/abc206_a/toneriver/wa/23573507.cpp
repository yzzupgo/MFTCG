using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define rep2(i,s,n) for (int i = (s); i < (int)(n); i++)
#define pai arccos(-1);
#define keta(n) cout << fixed << setprecision((n));
using ll = long long;
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <string>
#define Sort(a) sort(a.begin(), a.end())
#define Reverse(a) reverse(a.begin(), a. end())
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define cYES cout << "YES" << endl
#define cNO cout << "NO" << endl
typedef long long int ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<vector<ll>> vvll;
typedef long double ld;
const int INF = 1 << 30;
const ll MOD = 1000000007;
int main() {
int n;
cin >> n;
int ans = n * 1.08;
if(ans < 206) {
cout << " Yay!";
}
if(ans == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
