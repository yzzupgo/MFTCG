#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
const int mod = 1000000007;
int main() {
ios::sync_with_stdio(false);
int x, y;
cin >> x >> y;
if (y % 2 || x * 2 > y || x * 4 < y) cout << "No";
else cout << "Yes";
}
