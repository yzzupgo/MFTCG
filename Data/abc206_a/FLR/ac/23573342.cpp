#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <iomanip>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <unordered_map>
#include <bitset>
#include <chrono>
#include <random>
#define rep(i,n) for(int i=0;i<n;i++)
#define repn(i,n) for(int i=1;i<=n;i++)
#define repr(e,x) for(auto& e:x)
using namespace std;
typedef long long ll;
typedef long double ld;
double const PI = 3.141592653589793;
int const INF = 1001001001;
ll const LINF = 1001001001001001001;
ll const MOD = 1000000007;
int N;
int main() {
cin >> N;
N *= 108;
N /= 100;
string ans = ":(";
if(N < 206) {
ans = "Yay!";
}
if(N == 206) {
ans = "so-so";
}
cout << ans << endl;
return 0;
}
