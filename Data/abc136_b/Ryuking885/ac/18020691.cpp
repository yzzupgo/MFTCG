#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define ALL(c) (c).begin(), (c).end()
using namespace std;
using ll = long long int;
using pii = pair<int,int>;
using vi = vector<int>;
using vvi = vector<vi>;
const long long INF = 1LL << 60;
int main()
{
int n; cin >> n;
int cnt = 0;
for (int i = 1; i <= n; i++)
{
string str = to_string(i);
if (str.size() % 2 == 1) cnt++;
}
cout << cnt << endl;
}
