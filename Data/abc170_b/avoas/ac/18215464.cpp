#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
constexpr double EPS = 1e-12;
int main() {
int x,y;
cin >> x >> y;
if(y%2 != 0) {
puts("No");
return 0;
}
cout << (y <= 4*x && y >= 2*x ? "Yes" : "No") << endl;
}
