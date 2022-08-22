#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define RFOR(i, a, b) for (int i = (b - 1); i >= (a); --i)
#define REP(i, n) FOR(i, 0, n)
#define RREP(i, n) RFOR(i, 0, n)
#define SORT(s) sort(s.begin(), s.end())
#define P pair<int, int>
#define mp make_pair
using namespace std;

template <typename _Ty>
ostream &operator<<(ostream &ostr, const vector<_Ty> &v)
{
  if (v.empty())
  {
    ostr << "{ }";
    return ostr;
  }
  ostr << "{" << v.front();
  for (auto itr = ++v.begin(); itr != v.end(); itr++)
  {
    ostr << ", " << *itr;
  }
  ostr << "}";
  return ostr;
}

template <class T>
inline bool chmax(T &a, T b)
{
  if (a < b)
  {
    a = b;
    return true;
  }
  return false;
}
template <class T>
inline bool chmin(T &a, T b)
{
  if (a > b)
  {
    a = b;
    return true;
  }
  return false;
}

int gcd(int a, int b)
{
  if (a % b == 0)
    return (b);
  else
    return (gcd(b, a % b));
}

int lcm(int a, int b)
{
  return a * b / gcd(a, b);
}

vector<int> uniq(vector<int> vec)
{
  sort(vec.begin(), vec.end());
  vec.erase(unique(vec.begin(), vec.end()), vec.end());
  return vec;
}

vector<ll> divisor(ll n)
{
  vector<ll> ret;
  for (int64_t i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      ret.push_back(i);
      if (i * i != n)
        ret.push_back(n / i);
    }
  }
  sort(begin(ret), end(ret));
  return (ret);
}
void permu(int n)
{
  vector<int> perm(n);
  REP(i, n)
  perm[i] = i;
  do
  {
    cout << perm << endl;
  } while (next_permutation(perm.begin(), perm.end()));
  return;
}

vector<pair<ll, int>> prime_div(ll n)
{
  vector<pair<ll, int>> res;
  for (ll i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      int a = 0;
      while (n % i == 0)
      {
        n /= i;
        a++;
      }
      pair<ll, int> tmp;
      tmp.first = i;
      tmp.second = a;
      res.push_back(tmp);
    }
  }
  if (n != 1)
  {
    pair<ll, int> now;
    now.first = n;
    now.second = 1;
    res.push_back(now);
  }
  return res;
}

// printf("%.10f\n" , ans);
int main(void)
{
  ios::sync_with_stdio(false);
  int a[5];
  REP(i, 5)
  {
    cin >> a[i];
  }
  int has = 10;
  REP(i, 5)
  {
    if (a[i] % 10 != 0)
    {
      has = min(has, a[i] % 10);
    }
  }
  int ans = 0;
  REP(i, 5)
  {
    if (a[i] % 10 == 0)
    {
      ans += a[i];
    }
    else
    {
      ans += ((a[i] / 10) + 1) * 10;
    }
  }
  cout << ans - 10 + has << endl;
  return 0;
}
