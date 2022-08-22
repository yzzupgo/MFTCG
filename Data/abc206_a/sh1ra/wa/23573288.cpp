#include <algorithm>
#include <cmath>
#include <deque>
#include <iostream>
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
if(N * 1.08 < 206) {
cout << "Yay!" << endl;
} else if(N * 1.08 == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
