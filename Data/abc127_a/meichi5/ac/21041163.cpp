#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;
int main() {
int a, b;
cin >> a >> b;
int ans;
if (a >= 13) ans = b;
else if (a >= 6) ans = b/2;
else ans = 0;
cout << ans << endl;
}
