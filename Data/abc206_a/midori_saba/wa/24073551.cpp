#include <math.h>
#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <tuple>
#include <vector>
#include <cmath>
#include <set>
#include <sstream>
#include <bitset>
#include <queue>
#include <functional>
#include <map>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define ALL(a) (a).begin(),(a).end()
#define MOD 1000000007
#define INF 1000000000000000000
using namespace std;
using ll = long long int;
using Graph = vector<vector<int>>;
ll gcd(ll a, ll b) {
return a % b == 0 ? b : gcd(b, a % b);
}
ll lcm(ll a, ll b) {
return a * b / gcd(a, b);
}
int main(void) {
int n;
cin >> n;
if(1.08 * n < 206) {
cout << "Yay!" << endl;
} else if(1.08 * n == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
