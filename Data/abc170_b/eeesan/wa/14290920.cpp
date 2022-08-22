#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define zero_pad(num) setfill('0') << std::right << setw(num)
using namespace std;
using ll = long long;
using ld = long double;
using P = pair<int, int>;
int main() {
int x, y;
cin >> x >> y;
rep(i, 100)rep(j, 100){
if(i + j == x && 2 * i + 4 * j == y){
cout << "YES" << endl;
return 0;
}
}
cout << "NO" << endl;
}
