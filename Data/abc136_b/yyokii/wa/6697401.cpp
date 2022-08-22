#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <string>
#include <cmath>
#include<cstdio>
using namespace std;
int main() {
cin.tie(0);
ios::sync_with_stdio(false);
int a;
cin >> a;
if (a < 10) cout << a;
if (a >= 10 && a < 100 ) cout << 9;
if (a >= 100 && a < 1000 ) {
int res = 9 + (a-99);
cout << res;
}
if (a >= 1000 && a < 9999 ) cout << 909;
if (a >= 10000 && a < 99999 ) {
int res = 9 + 900 + (a-9999);
cout << res;
}
if (a == 100000) cout << 90909;
return 0;
}
