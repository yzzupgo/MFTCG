#include<iostream>
#include<vector>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);++i)
using ll = long long;
using P = pair<int, int>;
#include<algorithm>
#include<math.h>
#include<map>
#include<queue>
#include<set>
int main() {
int x, y;
cin >> x>>y;
if (y < 2 * x) {
cout << "No"; return 0;
}
if (y > 2 * x) {
cout << "No"; return 0;
}
if (y % 2 == 1) {
cout << "No"; return 0;
}
cout << "Yes";
return 0;
}
