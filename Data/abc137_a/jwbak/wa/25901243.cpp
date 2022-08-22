#include <bits/stdc++.h>
#define R first
#define C second
#define W first
#define ND second
#define endl '\n'
#define sp ' '
#define rep(i,n) for (int i = 0; i < (n); i++)
#define Rep(i,start,n) for (int i = start; i < (n); i++)
#define all(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using tiii = tuple<int, int, int>;
vector<string> split(string s, char c) {
istringstream iss(s);
string sb; vector<string> ret;
ret.clear();
while (getline(iss, sb, c)) ret.push_back(sb);
return ret;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a, b;
int ans = max(a + b, max(a - b, a * b));
cout << ans;
return 0;
}
