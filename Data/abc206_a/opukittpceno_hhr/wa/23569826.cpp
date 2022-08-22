#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <string>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <fstream>
#include <cassert>
#include <cstring>
#include <unordered_set>
#include <unordered_map>
#include <numeric>
#include <ctime>
#include <bitset>
#include <complex>
#include <chrono>
#include <random>
#include <functional>
using namespace std;
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int n;
cin >> n;
int t = 108 * n / 100;
if(t < 206) {
cout << "Yay!\n";
} else if(t == 206) {
cout << "so-so\n";
} else {
cout << ": (\n";
}
}
