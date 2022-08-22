#include <algorithm>
#include <climits>
#include <cmath>
#include <deque>
#include <iostream>
#include <limits>
#include <numeric>
#include <queue>
#include <stack>
#include <string>
#include <utility>
#include <vector>
#define rep(i,x,n) for (int i = (x); i < (n); i++)
#define all(x) (x).begin(), (x).end()
#define pi (4.0 * atan(1.0))
#define fir first
#define sec second
typedef long long int llint;
typedef long double lldo;
using namespace std;
int main() {
int N;
cin >> N;
double ans = floor(N * 1.08);
if(ans < 206) {
cout << "Yay!" << endl;
} else if(ans == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
