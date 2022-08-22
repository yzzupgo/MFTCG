#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_set>
#include <queue>
using namespace std;
#define ll long long
#define rep(v,s,c) for (int v = s; v < (int)c; v++)
#define MOD 1000000007
using P = pair<int, int>;
int main()
{
int n;
cin >> n;
int ans = 0;
rep(i, 1, n+1)
{
if (1 <= i and i < 10)
ans++;
if (100 <= i and i < 10000)
ans++;
if (10000 <= i and i < 100000)
ans++;
}
cout << ans << endl;
return 0;
}
