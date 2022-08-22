#include <iostream>
#include <algorithm>
#include <map>
#include <utility>
#include <vector>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < n; i++)
#define rep1(i,n) for(int i = 1; i <= n; i++)
int main() {
int a, b;
cin >> a >> b;
int ans = max(a+b, a*b);
ans = max(ans, a-b);
cout << ans << endl;
return 0;
}
