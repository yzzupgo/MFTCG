#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <numeric>
using namespace std;
typedef long long int ll;
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define REP(i,n) for(int i = 0; i < (int)(n); i++)
int main() {
ll N;
cin >> N;
ll ans = 0;
if (N < 10) ans = N;
else if(10 <= N && N < 100) ans = 9;
else if(100 <= N && N < 1000) ans = 9 + N - 100 + 1;
else if(1000 <= N && N < 1000) ans = 909;
else if(10000 <= N && N < 100000) ans = 909 + N - 10000 + 1;
else if(100000 <= N) ans = 90909;
cout << ans << endl;
return 0;
}
