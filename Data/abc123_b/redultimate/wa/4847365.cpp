#include<iostream>
#include<cmath>
#include<cstdlib>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<map>

using namespace std;

typedef long long ll;

typedef std::pair<int, int> ipair;
bool lessPair(const ipair& l, const ipair& r){return l.second < r.second;}
bool morePair(const ipair& l, const ipair& r){return l.second > r.second;}

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

const ll MOD = 1e9 + 7;
void add(long long &a, long long b) { a += b; if (a >= MOD) a -= MOD; }

int main() {
   int a, b, c, d, e;
   cin >> a >> b >> c >> d >> e;
   int ans = 0;
   if (a % 10 == 0) ans += a;
   else ans += (a / 10 + 1) * 10;
   if (b % 10 == 0) ans += b;
   else ans += (b / 10 + 1) * 10;
   if (c % 10 == 0) ans += c;
   else ans += (c / 10 + 1) * 10;
   if (d % 10 == 0) ans += d;
   else ans += (d / 10 + 1) * 10;
   if (e % 10 == 0) ans += e;
   else ans += (e / 10 + 1) * 10;
   int tmp = 9;
   if (a % 10 != 0 && a % 10 < tmp) tmp = a % 10;
   if (b % 10 != 0 && b % 10 < tmp) tmp = b % 10;
   if (c % 10 != 0 && c % 10 < tmp) tmp = c % 10;
   if (d % 10 != 0 && d % 10 < tmp) tmp = d % 10;
   if (e % 10 != 0 && e % 10 < tmp) tmp = e % 10;
   
   cout << ans - 10 + tmp << endl;
   return 0;
}
