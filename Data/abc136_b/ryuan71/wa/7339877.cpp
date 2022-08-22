#include <bits/stdc++.h>
using namespace std;
#define rep(i,s,n) for (int i = (int)s; i < (int)n; i++)
#define ll long long
#define pb push_back
#define All(x) x.begin(), x.end()
#define Range(x,i,j) x.begin() + i, x.begin() + j
#define lbidx(x,y) lower_bound(x.begin(), x.end(), y) - x.begin()
#define ubidx(x,y) upper_bound(x.begin(), x.end(), y) - x.begin()
#define BiSearchRangeNum(x,y,z) lower_bound(x.begin(), x.end(), z) - lower_bound(x.begin(), x.end(), y)
int main() {
int N;
cin >> N;
if (N = 100000) {
cout << 90909 << endl;
} else {
int ans;
if (N >= 10000) {
ans = N - 9090;
} else if (N >= 1000) {
ans = 910;
} else if (N >= 100) {
ans = N - 90;
} else if (N >= 10) {
ans = 9;
} else {
ans = N;
}
cout << ans;
}
};
