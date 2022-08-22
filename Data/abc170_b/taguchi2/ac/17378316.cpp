#include <iostream>
#include <cmath>
#include <climits>
#include <string>
#include <numeric>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <functional>
using namespace std;
using ll = long long;
int main(){
int x, y,z;
cin >> x >> y;
z = y % 2;
if (z != 0)cout << "No" << endl;
else if (4 * x < y)cout << "No" << endl;
else if (2 * x > y)cout << "No" << endl;
else cout << "Yes" << endl;
}
