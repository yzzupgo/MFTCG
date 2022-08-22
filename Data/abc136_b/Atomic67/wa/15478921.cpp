#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;
int main() {
int n;
cin >> n;
int cnt = 0;
for(int i = 1; i <= n + 1; i++) {
string s = to_string(i);
int cmp = s.length();
if(cmp % 2 == 1) cnt++;
}
cout << cnt << endl;
}
