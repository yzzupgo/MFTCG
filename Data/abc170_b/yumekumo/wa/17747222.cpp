#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <tuple>
#include <cstdint>
#include <cstdio>
#include <cmath>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <deque>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <cctype>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
int main() {
int x, y;
cin >> x >> y;
if(y >= x*2 && y <= x*3 && y%2 == 0) {
cout << "Yes" << endl;
} else {
cout << "No" <<endl;
}
return 0;
}
