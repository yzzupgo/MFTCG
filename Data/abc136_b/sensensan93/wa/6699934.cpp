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
if (N < 10) {
ans += N;
}else{
ans += 9;
if (N < 1000){
ans += N - 100 + 1;
}else{
ans += 900;
if (N < 100000){
ans += N - 10000 + 1;
}else{
ans += N - 10000;
}
}
}
cout << ans << endl;
return 0;
}
