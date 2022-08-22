#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <tuple>
#include <cstdint>
#include <cstdio>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <deque>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <cctype>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
int A = (Y - 2 * X) % 2;
int B = (Y - 2 * X) / 2;
if (A == 0 && B <= X) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
}
