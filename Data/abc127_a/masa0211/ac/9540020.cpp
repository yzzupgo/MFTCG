#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <math.h>
using namespace std;
#define rep(i,n) REP(i,0,n)
#define REP(i,x,n) for(int i=x;i<n;++i)
#define ll long long
template<class T> inline bool chMin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chMax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
void Main() {
int A, B; cin >> A >> B;
int res;
if (A >= 13) res = B;
else if (A >= 6) res = B/2;
else res = 0;
cout << res << endl;
}
int main() {
std::ios::sync_with_stdio(false);
std::cin.tie(0);
std::cout << std::fixed << std::setprecision(15);
Main();
return 0;
}
