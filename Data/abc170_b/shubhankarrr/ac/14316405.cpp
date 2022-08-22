#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <climits>
#include <iomanip>
#include <unordered_map>
#include <unordered_set>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define ye cout<<"YES";
#define no cout<<"NO";
#define ln cout<<"\n";
using namespace std;
ll mod(ll x, ll m) {
return (x % m + m) % m;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
ll t = 1, r, n, a, d, c, b, x, y, sum, cnt, i, j, k, m, l, q, maxx, minn, temp, ans, flag, g, ts;
ll mod = 1000000007;
char ch, chh;
double dans;
string str, ttr;
for (ts = 1; ts <= t; ts++)
{
flag = 0; sum = 0; cnt = 0; ans = 0; k = 0; maxx = 0; minn = 0; a = 0; b = 0; temp = 0;
cin >> x >> y;
if (y % 2 == 0)
{
maxx = (y / 2);
minn = (y / 4) + ((y % 4)) / 2;
if (x <= maxx && x >= minn)
cout << "Yes";
else
cout << "No";
}
else
cout << "No";
ln
}
return 0;
}
