#include <iostream>
#include <utility>
#include <map>
#include <vector>
#include <algorithm>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <deque>
#include <cmath>
using namespace std;
typedef long long ll;
ll mod = 1e9+7;
#define rep(i,n) for(int i = 0; i < (n); ++i)
int main() {
int a, b;
cin >> a >> b;
if (a >= 13) cout << b << endl;
else if (a > 5) cout << b / 2 << endl;
else cout << 0 << endl;
return 0;
}
