#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
int a;
cin >> a;
a = a * 108 / 100;
cout << (a < 206 ? "yay!" : (a == 206 ? "so-so" : ":("));
}
