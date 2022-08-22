#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <cstdint>
#include <set>
#include <queue>
#include <stack>
#include <unordered_map>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Pii = pair<int, int>;
using Pis = pair<int, string>;
using Graph = vector<vector<int>>;
struct Edge
{
int to;
ll w;
Edge(int to, ll w) : to(to), w(w) {}
};
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;
int main()
{
int A, B;
cin >> A >> B;
if (A >= 13)
{
cout << B << endl;
}
else if (6 <= A && A < 13)
{
cout << B / 2 << endl;
}
else
{
cout << 0 << endl;
}
return 0;
}
