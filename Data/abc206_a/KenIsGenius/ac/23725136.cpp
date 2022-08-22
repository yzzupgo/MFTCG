#include <iostream>
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <sstream>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <climits>
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vpii vector<pii>
#define V vector
#define pb push_back
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define F first
#define S second
#define sqr(x) (x)*(x)
#define mp make_pair
#define mtp make_tuple
#define tpii tuple<int,int,int>
#define rep(n) for(int i=0;i<n;i++)
#define inf INT_MAX
#define debug(x) cerr<<x<<'\n';
#define sz(x) (int)((x).size())
#define int long long
#define ull unsigned long long
#define quick ios_base::sync_with_stdio(0),cin.tie(0);long double nownow=clock();
#define total_time cerr<<(clock()-nownow)/CLOCKS_PER_SEC*1000<<" (ms)\n";
using namespace std;
int gcd(int a, int b) {
return (a % b ? gcd(b, a % b) : b);
}
template<typename T>void in(vector<T> &a) {
for(auto &i : a) {
cin >> i;
}
}
template<typename T>void out(vector<T> &a) {
for(auto &i : a) {
cout << i << ' ';
}
cout << '\n';
}
template<typename T>void out(multiset<T> &a) {
for(auto i : a) {
cout << i << ' ';
}
cout << '\n';
}
template<typename T>void out(set<T> &a) {
for(auto i : a) {
cout << i << ' ';
}
cout << '\n';
}
#define yn(x) cout<<((x)?"Yes\n":"No\n");
#define YN(x) cout<<((x)?"YES\n":"NO\n");
#define mod (int)(1e9+7)
signed main() {
quick
int n;
cin >> n;
if((int)(n * 1.08) < 206) {
cout << "Yay!\n";
} else if((int)(n * 1.08) == 206) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
total_time
return 0;
}
