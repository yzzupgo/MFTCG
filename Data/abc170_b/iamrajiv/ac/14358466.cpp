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
int n = a + 1;
int arr[n];
int k = 2 * a;
for (int i = 0; i < n ; i++)
{
arr[i] = k;
k = k + 2;
}
if (binary_search(arr, arr + n, b))
cout << "Yes";
else
cout << "No";
return 0;
}
