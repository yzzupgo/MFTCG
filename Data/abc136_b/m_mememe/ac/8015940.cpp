#include<iostream>
#include<string>
#include<algorithm>
#define rep(i,n) for (int i = 0; i < (n); i++)
#define rep1(i,n) for (int i = 1; i < (n); i++)
#define repm(i,m,n) for (int i = (m); i < (n); i++)
#define rep_rev(i,n) for (int i = int (n); i >= 0; i--)
typedef long long ll;
using namespace std;
int main() {
int n;
cin >> n;
int ans;
if (n < 10)ans = n;
else if (10 <= n && n < 100)ans = 9;
else if (100 <= n && n < 1000)ans = n - 90;
else if (1000 <= n && n < 10000)ans = 909;
else if (10000 <= n && n < 100000)ans = n - 9090;
else if (n == 100000)ans = 90909;
cout << ans << endl;
return 0;
}
