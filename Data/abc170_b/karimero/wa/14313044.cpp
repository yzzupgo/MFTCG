#include <bits/stdc++.h>
#define REP(i,n) for (int i = 0; i < (n); ++i)
#define RREP(i,n) for (int i = (n); i >= 0; --i)
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define RFOR(i,a,b) for (int i = (a); i >= (b); --i)
#define ALL(v) (v).begin(), (v).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define uint8_t unsigned char
#define uint16_t unsigned short
#define uint32_t unsigned int
#define uint64_t unsigned long long
#define int8_t signed char
#define int16_t signed short
#define int32_t signed int
#define int64_t signed long long
using namespace std;
int main(int argc, char const* argv[])
{
int x = 0;
int y = 0;
cin >> x >> y;
int b = (y-2*x)/2;
int a = x-b;
if (2*a + 4*b == y) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
return 0;
}
