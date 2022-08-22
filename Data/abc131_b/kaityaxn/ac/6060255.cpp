#include <algorithm>
#include <bitset>
#include <cassert>
#include <chrono>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <queue>
#include <random>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <sys/timeb.h>
#include <vector>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
#define FOR(NAME,START,NUM) for (ll NAME = START; NAME < (NUM); NAME++)
#define REP(NAME,NUM) for (ll NAME = 0; NAME < (NUM); NAME++)
#define BREP(NAME,NUM) for (ll NAME = (NUM)-1; NAME >= 0; NAME--)
#define ALL(NAME) (NAME).begin(), (NAME).end()
const ll LINF = 1e18;
const int INF = 1e9;
const int mod = 1e9+7;
int main(){
int n, k, sum =0, ans;
int mina = INF;
cin >> n >> k;
vector<int> a(n);
REP(i, n){
a[i] = k+i;
sum+=a[i];
if(abs(a[i]) < mina){
mina = abs(a[i]);
ans = a[i];
}
}
cout << sum - ans<< endl;
}
