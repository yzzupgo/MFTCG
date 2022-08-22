#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <utility>
#include <bitset>
#include <numeric>
#include <set>
#include <cstdlib>
#include <sstream>
#include <iomanip>
using namespace std;
#define pr(x) \
cout << x;
#define nl \
cout << "\n";
#define IOS \
ios::sync_with_stdio(0); \
cin.tie(0); \
cout.tie(0);
#define loop(a,b) \
for(auto i = (a); i <= (b); i++)
#define loopr(a,b) \
for(auto i = (a); i >= (b); i--)
#define ull \
unsigned long long
#define ll \
long long
#define vout(s) \
for(auto x:s){cout<<x<<" ";} \
cout<<"\n";
#define strout2d(str) \
for(auto x:str){ cout<<x<<"\n";}
#define vin(s) \
for(auto &x:s) \
cin>>x;
#define ld \
long double
bool cmpr(ll a, ll b) {
return a > b;
}
void solve() {
long double p;
cin >> p;
p = 1.08 * p;
if(p == 206.00) {
pr("so-so")nl;
} else if(p > 206.00) {
pr(":(")nl;
} else {
pr("Yay!")nl;
}
}
int main() {
IOS;
solve();
}
