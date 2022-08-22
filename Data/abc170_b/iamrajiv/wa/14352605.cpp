#include <iostream>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <math.h>
#include <set>
#include <string.h>
#include <vector>
using namespace std;
#define int long long
void fastio()
{
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
int32_t main()
{
fastio();
int a, b;
cin >> a >> b;
int n = 2 * a;
int arr[n];
for (int i = 1; i <= n; ++i)
{
arr[i] = 2 * i;
}
if (binary_search(arr, arr + n, b) && b > n)
cout << "Yes";
else
cout << "No";
return 0;
}
