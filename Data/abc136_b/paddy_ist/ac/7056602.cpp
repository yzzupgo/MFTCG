#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
template <class T>
bool INRANGE(T x, T a, T b) { return a <= x && x <= b; }
template <class T>
bool chmax(T &a, const T &b) {if (a < b){ a = b; return 1;} return 0;}
template <class T>
bool chmin(T &a, const T &b) {if (a > b){ a = b; return 1;}return 0;}
template <class T>
void printv(vector<T> v) {for (T t : v) {cout << t << " ";}cout << '\n';}
#define REP(i,n) for (int i = 0; i < (n); ++i)
#define RREP(i,n) for (int i = (n); i >= 0; --i)
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define RFOR(i,a,b) for (int i = (a); i >= (b); --i)
#define ALL(v) (v).begin(), (v).end()
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" \
<< " " << __FILE__ << endl;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
int main()
{
int N;
cin >> N;
int MAX = (int)10e5;
int digit;
int n = N;
REP(i,6) {
n /= 10;
if (n == 0) {
digit = i+1;
break;
}
}
int ans = 0;
REP(i,digit-1) {
if (i%2 == 0) ans += 9*pow(10,i);
}
if (digit%2 == 1) ans += N - pow(10,digit-1) + 1;
cout << ans << endl;
return 0;
}
