#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;
typedef long long ll;
int main() {
ios::sync_with_stdio(false);
cin.tie(0);
int n;
cin >> n;
vector<int> res(n);
rep(i, n) res[i] = i + 1;
int sum = 0;
for (int i = 0; i < n; i++) {
if (to_string(res[i]).size() % 2 != 0) sum++;
}
cout << sum << endl;
}
