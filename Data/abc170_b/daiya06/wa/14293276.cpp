#include <bits/stdc++.h>
using namespace std;
inline int ctoi(char c) { if(c < '0' || '9' < c) throw invalid_argument("ctoi error"); return c - '0'; }
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = (int)(k); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
template <typename T>
inline T gcd(T x, T y){
if (x <= 0 || y <= 0) throw invalid_argument("gcd error: x <= 0 or y <= 0");
if(x < y) swap(x, y);
T r = x % y;
while(r != 0){
x = y;
y = r;
r = x % y;
}
return y;
}
template <typename T>
inline T lcm(T x, T y){
if (x <= 0 || y <= 0) throw invalid_argument("lcm error: x <= 0 or y <= 0");
return x * y / gcd(x, y);
}
int main(){
int x, y;
cin >> x >> y;
for(int i = 0; i <= x; i++){
if(2 * i + 4 * (x - i) == y){
cout << "YES";
return 0;
}
}
cout << "NO";
return 0;
}
