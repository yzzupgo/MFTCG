#include <bits/stdc++.h>
using namespace std;
#define ll long long;
mt19937 mrand(random_device{}());
int rnd(int x) { return mrand() % x; }
struct fast_ios {
fast_ios() {
ios::sync_with_stdio(false);
cin.tie(0);
cout << fixed << setprecision(10);
};
} fast_ios_;
int main() {
int x, y;
cin >> x >> y;
if (y / 2 - x >= 0 && 2 * x - y / 2 >= 0 && y % 2 == 0)
puts("Yes");
else
puts("No");
return 0;
}
