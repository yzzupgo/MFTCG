#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
void solve() {
int N;
cin >> N;
int s = trunc(N * 1.08);
if(s == 206) {
cout << "so - so" << endl;
} else if(s < 206) {
cout << "Yay!" << endl;
} else if(s > 206) {
cout << ":(" << endl;
}
}
int main() {
solve();
return 0;
}
