#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 1000000001
#define MOD 1000000007
#define rep(i,n) for (int i = 0; i < n; ++i)
void solve(void) {
int n;
cin >> n;
if(int(1.08 * n) < 206) {
cout << "Yay!" << endl;
} else if(int(1.08 * n) == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
int main(void) {
solve();
}
