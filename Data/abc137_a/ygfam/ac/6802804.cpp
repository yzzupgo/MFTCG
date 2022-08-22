#include <iostream>
#include <cstdio>
#include <functional>
#include <algorithm>
#include <climits>
#include <utility>
#include <string>
#include <stack>
#include <vector>
#include <queue>
#include <map>
#define LF '\n';
#define MOD 1000000007
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
int main(void)
{
ios::sync_with_stdio(false);
int a, b;
cin >> a >> b;
cout << max(a + b, max(a - b, a*b));
return 0;
}
