#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define pii pair<int,int>
#define F first
#define S second
#define ps(x,y) fixed << setprecision(y) << x
#define f(i,j,n) for (int i = j; i < n; i++)
#define r(i,j,n) for (int i = n - 1; i >= j; i--)
#define newl "\n"
#define debug(statement) \
cerr << statement << endl
#define debug_variable(var) \
cerr << (#var) << ": " << var << endl
template <typename T>
ostream &operator<<(ostream &os, vector<T> &v)
{
for (auto element : v)
{
os << element << " ";
}
return os;
}
template <typename T, typename S>
ostream &operator<<(ostream &os, pair<T, S> &p)
{
os << "(" << p.first << ", " << p.second << ")";
return os;
}
template <typename T>
ostream &operator<<(ostream &os, set<T> &v)
{
auto endit = v.end();
endit--;
os << "[";
for (auto it = v.begin(); it != v.end(); it++)
{
os << *it;
if (it != endit)
{
os << ", ";
}
}
os << "]";
return os;
}
template <typename T, typename S>
ostream &operator<<(ostream &os, map<T, S> &v)
{
auto endit = v.end();
endit--;
os << "{";
for (auto it = v.begin(); it != v.end(); it++)
{
os << "(" << (*it).first << " : " << (*it).second << ")";
if (it != endit)
{
os << ", ";
}
}
os << "}";
return os;
}
const int MOD=1e9+7;
void solve()
{
int x , y;
cin >> x >> y ;
int mini = 2*x;
int maxi = 4*x;
if(y%2 == 0 && y >= mini && y <= maxi){
cout << "YES" << newl;
}
else{
cout << "NO" << newl;
}
}
int32_t main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL);
int t;
t = 1;
while (t-- > 0)
{
solve();
}
return 0;
}
