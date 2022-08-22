#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <list>
#include <queue>
#include <deque>
#include <algorithm>
#include <numeric>
#include <utility>
#include <complex>
#include <functional>
using namespace std;
typedef long long ll;
int main() {
cin.tie(0);
ios::sync_with_stdio(false);
int n;
cin >> n;
n *= 108;
n /= 100;
if(n >= 206) {
cout << ":(" << "\n";
} else {
cout << "Yay!" << "\n";
}
}
