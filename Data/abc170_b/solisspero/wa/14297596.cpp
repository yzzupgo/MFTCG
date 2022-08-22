#include<iostream>
#include<cstdlib>
#include<utility>
#include<tuple>
#include<string>
#include<vector>
#include<numeric>
#include<algorithm>
#include<queue>
#include<deque>
#include<bitset>
#include<cmath>
#include<map>
#include<iomanip>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
#define rep(i,a,b) for(int i = a; i < b; i++)
int main() {
int x, y;
cin >> x >> y;
if (y % 2 != 0) {
cout << "No" << endl;
return 0;
}
if(y / 4 > x) {
cout << "No" << endl;
return 0;
}
if(y / 2 < x) {
cout << "No" << endl;
return 0;
}
cout << "Yes" << endl;
return 0;
}
