#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif
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
#include <iostream>
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
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
typedef vector<string> vs;
typedef pair<ll,ll> P;
typedef vector<P> vp;
#define REP(i,n) for(int i=0;i<n;i++)
#define FOR(i,m,n) for(int i=m;i<n;i++)
#define REPR(i,n) for(int i=n-1;i>=0;i--)
#define FORR(i,n,m) for(int i=n-1;i>=m;i--)
#define ARR(array) for(int i=0;i<array.size();i++)
#define all(in) in.begin(),in.end()
#define ALL(in,K) in,in+K
#define INF 1e18
#define MOD 1000000007
#define SIZE 10005
#define PI 3.14159265358979323846
ll gcd(ll a, ll b) { return b ? gcd(b, a%b) : a; }
ll lcm(ll a, ll b) { return a/gcd(a, b)*b; }
ll input(){
ll a;
cin >> a;
return a;
}
int main(){
cin.tie(0);
ios::sync_with_stdio(false);
ll n = input();
ll ans = 0;
for(int i=1;i<n;i*=100){
if(i*10>n)ans += n%100+1;
else ans += i*9;
}
cout << ans << endl;
}
