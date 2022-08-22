#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <iomanip>
#include <fstream>
#include <map>
#include <cassert>
#include <sstream>
#include <numeric>
#include <regex>
#include <cctype>
#include <utility>
#include <stdio.h>
typedef long long ll;
#define nums vector<int>
#define words vector<string>
#define letrs vector<char>
#define MOD 1000000007
#define pb push_back
#define llnums vector<ll>
#define FOR(i,n) for(int i{0}; i < n; ++i)
using namespace std;
int main(void) {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int x, y;
cin >> x >> y;
bool ans = false;
for (int i{0}; i < x+1; ++i) {
int b = x - i;
if (2*i + 4*b == y) {
ans = true;
}
}
if (ans) {cout << "Yes\n";}
else {cout << "No\n";}
return 0;
}
