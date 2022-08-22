#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
using pii = pair<int, int>;
using qi = queue<int>;
using pqi = priority_queue<int>;
using pqiii = priority_queue<int, vector<int>, greater<int>>;
using sti = stack<int>;
using mii = map<int, int>;
using msi = map<string, int>;
#define rep(i,k,n) for (int i = (int)(k); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define fixed(n) cout << fixed << setprecision((int)(n));
int main() {
int N, A, a=-101, b=0, T = 0;
cin >> N;
rep(i,0,N) {
cin >> A;
if (A < 0) a = max(a, A);
else b = min(b, A);
T += A;
}
cout << (min(abs(a), abs(b)) == b ? T - b : T - a) << endl;
}
