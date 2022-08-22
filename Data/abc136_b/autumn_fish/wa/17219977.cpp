#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <tuple>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include<iomanip>
#include<functional>
using namespace std;
typedef long long ll;
long long GCD(long long a, long long b) {
if (b == 0) return a;
else return GCD(b, a % b);
}
int ncnt(int n) {
int ans = 0;
while (n) {
n /= 10;
ans++;
}
return ans;
}
int main() {
int N;
cin >> N;
int cnt = ncnt(N);
int ans = 0;
for (int i = 0; i < cnt; i++) {
if (i % 2 == 0) {
if (i + 1 == cnt) {
int m = pow(10, i);
ans += N % m + 1;
}
else ans += pow(10, i) * 9;
}
}
cout << ans << endl;
}
