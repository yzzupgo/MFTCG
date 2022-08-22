#include<bits/stdc++.h>
using namespace std;
#define MOD 998244353
#define SZ 300010
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
typedef long long LL;
typedef pair<int, int> PII;
typedef pair<LL, LL> PLL;
int n;
int main() {
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
cin >> n;
int yo = n * 1.08;
int list_price = 206;
if(yo > list_price) {
cout << "Yay!" << endl;
} else if(yo == list_price) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
