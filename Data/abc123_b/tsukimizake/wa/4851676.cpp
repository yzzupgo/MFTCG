#include <algorithm>
#include <cmath>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using ll = long long;
using namespace std;
using P = pair<ll, ll>;
static ll imin = std::numeric_limits<ll>::min() / 10;
static ll imax = std::numeric_limits<ll>::max() / 10;
#define rep(i, n) for (ll i = 0; (i) < (n); ++(i))
#define rep1(i, n) for (ll i = 1; (i) < (n); ++(i))
#define rev_rep(i, n) for (ll i = (n)-1; (i) >= 0; --(i))
#define range(a, i, b) for (ll i = (a); (i) < (b); ++(i))

#ifdef LOCAL
#define dump(x) cout << #x << ":" << (x) << "\n";
#endif
#ifndef LOCAL
#define dump(x)
#endif

#define all(v) v.begin(), v.end()
#define readl(N)                                                               \
  ll N;                                                                        \
  cin >> N;
#define readlv(N, vec)                                                         \
  vector<ll> vec(N);                                                           \
  rep(i, N) { cin >> vec[i]; }
#define greater_than [](ll l, ll r) { return l > r; }
template <class T1, class T2>
std::ostream &operator<<(std::ostream &os, std::map<T1, T2> &mp);
template <class T1, class T2>
std::ostream &operator<<(std::ostream &os, std::pair<T1, T2> &pair);
template <class T>
std::ostream &operator<<(std::ostream &os, std::vector<T> &vec);
template <class T1, class T2>
std::ostream &operator<<(std::ostream &os, std::pair<T1, T2> &pair) {
  os << '(' << pair.first << ',' << pair.second << ')';
  return os;
}

template <class T>
std::ostream &operator<<(std::ostream &os, std::vector<T> &vec) {
  std::size_t n = vec.size();
  if (n == 0) {
    return os;
  }
  os << " ";
  for (ll i = 0; i < n - 1; ++i) {
    os << vec[i] << " ";
  }
  os << vec[n - 1];
  os << std::endl;
  return os;
}

template <class T1, class T2>
std::ostream &operator<<(std::ostream &os, std::map<T1, T2> &mp) {
  std::size_t n = mp.size();
  if (n == 0) {
    return os;
  }
  os << " ";
  for (auto &&x : mp) {
    os << x << " ";
  }
  os << std::endl;
  return os;
}

template <class T> std::ostream &operator<<(std::ostream &os, std::set<T> &mp) {
  std::size_t n = mp.size();
  if (n == 0) {
    return os;
  }
  os << " ";
  for (auto &&x : mp) {
    os << x << " ";
  }
  os << std::endl;
  return os;
}

template <class T> inline bool chmin(T &a, T const b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}
template <class T> inline bool chmax(T &a, T const b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}

ll fact(ll n) {
  ll res = 1;
  while (n > 0) {
    res *= n;
    n--;
  }
  return res;
}

ll pow(ll i, ll n) {
  ll res = 1;
  while (n >= 0) {
    res *= i;
    n--;
  }
  return res;
}

ll gcd(ll l, ll r) {
  if (l < r) {
    return gcd(r, l);
  }
  if (r == 0) {
    return l;
  }
  return gcd(r, l % r);
}

template <class T> vector<T> accum_sum(vector<T> const &a) {
  vector<T> b(a.size() + 1);
  b[0] = 0;
  rep(i, a.size()) { b[i + 1] = b[i] + a[i]; }
  return b;
}

class modint {
public:
  using ll = long long;
  ll num;
  static const ll MOD = 1e9 + 7;
  static vector<modint> factorial;

  modint() : num(0){};
  modint(ll _n) : num((_n + MOD) % MOD) {}
  modint(const modint &r) : num(r.num) {}
  operator ll() const { return (num + MOD) % MOD; }
  friend istream &operator>>(istream &is, modint &r) {
    ll num_;
    is >> num_;
    r = num_;
    return is;
  }
  modint operator+(const modint &r) const { return modint(num + r.num); }
  modint operator-(const modint &r) const { return modint(num - r.num); }
  modint operator*(const modint &r) const { return modint(num * r.num); }

  template <typename T> modint operator^(const T &r) const {
    if (r == 0)
      return 1;
    return (((*this) * (*this)) ^ (r / 2)) * modint(r & 1 ? num : 1);
  }
  modint operator/(const modint &r) const { return num * (r ^ (MOD - 2)); }

  modint operator+=(const modint &r) { return *this = *this + r; }
  modint operator-=(const modint &r) { return *this = *this - r; }
  modint operator*=(const modint &r) { return *this = *this * r; }
  modint operator/=(const modint &r) { return *this = *this / r; }

  template <typename T> modint operator^=(const T &r) {
    return *this = *this ^ r;
  }

  static modint fact(int n) {
    if ((int)factorial.size() <= n)
      factorial.resize(n + 1);
    if (factorial[n])
      return factorial[n];
    if (n == 0)
      return 1;
    return factorial[n] = modint(n) * fact(n - 1);
  }

  static modint com(modint n, modint r) {
    return n >= r ? fact(n) / (fact(n - r) * fact(r)) : modint(0);
  }
};

vector<modint> modint::factorial;

constexpr ll mod = 1e9 + 7;

bool isprime(ll n) {
  if (n < 2) {
    return false;
  }
  range(2, i, sqrt(n) + 1) {
    if (n == i) {
      break;
    }
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}
template <class ValueType> auto mkVec(ValueType init, size_t x) {
  return vector<ValueType>(x, init);
}
template <class ValueType, class... Ns>
auto mkVec(ValueType init, size_t n, Ns... ns) {
  return vector<decltype(mkVec(init, ns...))>(n, mkVec(init, ns...));
}

int main(int argc, char const *argv[]) {
  vector<ll> v(5);
  ll m = 10;
  rep(i, 5) {
    ll a;
    cin >> a;
    v[i] = a;
  }
  ll sum = 0;
  rep(i, 5) {
    sum += v[i] - (v[i] % 10) + 10;
    if (v[i] % 10 == 0) {
      sum -= 10;
    }
  }
  ll res = imax;
  rep(i, 5) {
    if (v[i] % 10 != 0) {
      res = min(res, sum - (v[i] - (v[i] % 10) + 10) + v[i]);
    }
  }

  cout << res << endl;
  return 0;
}
