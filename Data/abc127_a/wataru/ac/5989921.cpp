#include<bits/stdc++.h>
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
using namespace std;
#define min_3(a,b,c) min(a, min(b, c))
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
int a, b;
cin >> a >> b;
if(a >= 13) cout << b << endl;
else if(a >= 6 && a <= 12) cout << b / 2 << endl;
else cout << '0' << endl;
}
