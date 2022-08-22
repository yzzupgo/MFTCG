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
int a, n;
cin >> a >> n;
if (ceil(log2(n)) == floor(log2(n)))
cout << "Yes" << endl;
else if (n > 4 * a)
cout << "No" << endl;
else
cout << "No" << endl;
return 0;
}
