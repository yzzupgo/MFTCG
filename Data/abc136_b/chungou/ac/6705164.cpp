#include<iostream>
#include<algorithm>
using namespace std;
int main() {
int n;
int ans = 0;
cin >> n;
if (n >= 10)ans += 9;
else ans += n;
if (n > 99)
ans += n > 999 ? 900 : n - 99;
if (n > 9999)
ans += n > 99999 ? 90000 : n - 9999;
cout << ans << endl;
return 0;
}
