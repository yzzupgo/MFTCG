#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void init_code() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
int main() {
init_code();
int n, m;
cin >> n;
m = n * 1.08;
if(m > n) {
cout << "Yay!";
} else if(m == n) {
cout << "so-so";
} else {
cout << ":(";
}
}
