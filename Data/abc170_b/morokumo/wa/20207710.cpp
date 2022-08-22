#include <algorithm>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define replr(i,l,r) for (int i = (l); i < (r); ++i)
const int INF = 2e9;
int main() {
int a, b;
cin >> a >> b;
int sum = 0;
if (b % 2 == 0 && b / 2 == a) {
cout << "Yes" << endl;
return 0;
}
while (sum + 2 <= b) {
if (b % 4 == 0 && b / 4 == a) {
cout << "Yes" << endl;
return 0;
}
sum += 2;
a--;
}
cout << "No" << endl;
return 0;
}
