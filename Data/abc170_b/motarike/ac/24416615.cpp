#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);++i)
using ll=long long;
using P=pair<int,int>;
const int MOD = 1000000007;
int mi = 1001001001;
int ma = -1;
const int MaxA = 200;
int main() {
int X, Y;
cin >> X >> Y;
for (int i = 0; i <= X; i++) {
if (i * 2 + (X - i) * 4 == Y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
