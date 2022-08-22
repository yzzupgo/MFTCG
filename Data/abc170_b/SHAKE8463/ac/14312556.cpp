#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using ld = long double;
long double const pi = std::acos(-1.0L);
typedef pair<int,int> P;
const int INF = 1001001001;
int main() {
int x, y;
cin >> x >> y;
for(int i = 0; i <= x; ++i){
if(2*i+4*(x-i)==y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
