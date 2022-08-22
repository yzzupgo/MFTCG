#include <bits/stdc++.h>
using namespace std;
int main () {
int N, X;
cin >> N >> X;
int mn_X = 2 * N;
int mx_X = 4 * N;
if (mn_X <= X && X <= mx_X) {
if (X & 1) cout << "NO\n";
else cout << "YES\n";
}
else cout << "NO\n";
}
