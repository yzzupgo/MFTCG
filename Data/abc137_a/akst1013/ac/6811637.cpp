#include "bits/stdc++.h"
using namespace std;
#define FOR(i,a,b) for (int i = (a); i < (b); i++)
#define RFOR(i,a,b) for (int i = (b)-1; i >= (a); i--)
#define rep(i,n) for (int i = 0; i < (n); i++)
#define rep1(i,n) for (int i = 1; i < (n); i++)
#define rrep(i,n) for (int i = (n)-1; i >= 0; i--)
#define all(i) (i).begin(), (i).end()
#define rall(i) (i).begin(), (i).end(), greater<int>()
#define int long long
#define elif else if
#define eb emplace_back
#define pb push_back
#define mp make_pair
#define fst first
#define sec second
template <typename T>
void print(T x)
{
std::cout << x <<" " ;
}
template <typename T>
void println(T x)
{
std::cout << x << "\n";
}
signed main(void) {
int A, B;
cin >> A >> B;
int max = A + B;
if (max < A - B)max = A - B;
if (max < A*B) max = A * B;
print(max);
}
