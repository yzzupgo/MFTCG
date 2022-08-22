#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define repp(i,s,n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;
const ll mod = 1000000007;
int main() {
int n;
cin >> n;
int a = 1.08 * n / 1;
if(a < 206) {
cout << "Yay!" << endl;
} else if(a == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
