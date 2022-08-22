#include <bits/stdc++.h>
using namespace std;
#define rep(i,s,n) for (int i = (int)s; i < (int)n; i++)
#define ll long long
int main() {
int N, L;
cin >> N >> L;
vector<int> ord(N);
iota(ord.begin(), ord.end(), 0);
vector<int> apple(N);
vector<int> absapple(N);
rep(i, 0, N) {
apple[i] = L + i;
absapple[i] = abs(L + i);
}
sort(ord.begin(), ord.end(), [&](int a, int b) {
return absapple[a] < absapple[b];
});
int ans = 0;
rep(i, 1, N) {
ans += apple[i];
}
cout << ans << endl;
};
