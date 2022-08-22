#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <functional>
#include <bitset>
#include <cmath>
#include <stack>
#include <iomanip>
#include <map>
#include <math.h>
#include <list>
#include <deque>
#include <queue>
typedef long long ll;
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const int MOD = 1000000007;
const ll INF = 1LL << 60;
ll GCD(ll a, ll b) { return b ? GCD(b, a%b) : a; }
ll LCM(ll a, ll b) {return a / GCD(a, b) * b;}
int main()
{
int X,Y;
cin >> X >> Y;
int legs =4*X;
while(X >= 0)
{
if(legs == Y)
{
cout << "Yes" << endl;
return 0;
}
else
{
legs -= 2;
X--;
}
}
cout << "No" << endl;
}
