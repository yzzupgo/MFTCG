#define _GLIBCXX_DEBUG
#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <map>
#include <numeric>
#include <set>
#include <vector>
using namespace std;
const int INT_INF = 1 << 15;
const long long LONG_LONG_INF = 1LL << 31;
void solve();
int main()
{
solve();
return 0;
}
void printp(const double x, const int precision)
{
cout << fixed << setprecision(precision) << x << endl;
}
template <class T>
T sum(const vector<T> &a)
{
return accumulate(a.begin(), a.end(), 0);
}
template <class T>
void ascsort(T &a)
{
sort(a.begin(), a.end());
}
template <class T>
void dscsort(T &a)
{
sort(a.begin(), a.end());
reverse(a.begin(), a.end());
}
template <class T>
int get_index(const vector<T> &a, const T target)
{
auto iterator = find(a.begin(), a.end(), target);
return iterator != a.end() ? distance(a.begin(), iterator) : -1;
}
int get_index(const string s, const char target)
{
size_t npos = string::npos;
auto iterator = s.find(target);
return iterator != npos ? (int)iterator : -1;
}
template <class T>
void rle(T &a)
{
a.erase(unique(a.begin(), a.end()), a.end());
}
template <class T>
void print_array(const vector<T> &a)
{
for (int i = 0; i < a.size(); i++)
{
if (i != a.size() - 1)
{
cout << a[i] << " ";
}
else
{
cout << a[i] << endl;
}
}
}
int str_to_int(const string s)
{
return atoi(s.c_str());
}
int char_to_int(const char c)
{
return (int)(c - '0');
}
void solve()
{
int X, Y;
cin >> X >> Y;
for (int i = 0; i <= X; i++)
{
for (int j = 0; j <= X; j++)
{
if (i + j == X && i * 4 + j * 2 == Y)
{
cout << "Yes" << endl;
return;
}
}
}
cout << "No" << endl;
}
