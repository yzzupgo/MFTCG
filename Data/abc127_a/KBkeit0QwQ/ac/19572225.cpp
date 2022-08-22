#define _USE_MATH_DEFINES
#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <cmath>
#include <utility>
#include <map>
#include <set>
#include <vector>
#include <queue>
#include <stack>
#include <list>
#include <deque>
#include <iomanip>
#include <numeric>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef pair<string, int> psi;
typedef pair<int, string> pis;
typedef set<int> si;
typedef map<string, int> msi;
typedef map<string, bool> msb;
typedef priority_queue<int> pqi;
typedef stack<int> sti;
typedef queue<int> qi;
#define infi 2147483647
#define infl 9223372036854775806
#define MOD 1000000007
#define EPS 0.0000000001
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define repa(i,n) for(int i=1;i<=(int)n;i++)
#define irep(i,n) for(int i=(int)n-1;i>=0;i--)
using std::cin;
using std::string;
template <typename T>
T in() {
T temp; cin >> temp; return temp;
}
template <>
int in() {
int temp; (void)scanf("%d", &temp); return temp;
}
template <>
double in() {
double temp; (void)scanf("%lf", &temp); return temp;
}
template <>
char in() {
char temp; (void)scanf("%c", &temp); return temp;
}
template<typename T1, typename T2>
constexpr auto equals(T1 a, T2 b) { return (fabs(a - b) < EPS); }
void clear(std::queue<int>& q)
{
std::queue<int> empty;
std::swap(q, empty);
}
int main() {
int a, b; cin >> a >> b;
if (a >= 13) cout << b << endl;
else if (a >= 6) cout << b / 2 << endl;
else cout << 0 << endl;
return 0;
}
