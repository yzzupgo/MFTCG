#include "bits/stdc++.h"
using namespace std;
const int MOD = 1e9 + 7;
typedef long long lint;
typedef pair<int, int> P;
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define rep(i,n) for (lint i = 0; i < (n); i++)
#define INF LLONG_MAX
#define all(x) (x).begin(), (x).end()
#define pb push_back
int main()
{
int x, y;
cin >> x >> y;
bool flag = false;
for (int i = 0; i <= x; i++)
{
for (int j = 0; j <= x - i; j++)
{
if (2 * i + 4 * j == y)
flag = true;
}
}
if(flag)
cout << "Yes" << endl;
else
cout << "No" << endl;
return 0;
}
