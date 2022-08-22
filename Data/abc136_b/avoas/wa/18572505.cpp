#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
constexpr double EPS = 1e-12;
int main() {
int n;
cin >> n;
int ans = 0;
for(int i = n; i > 0; i--) {
if(n>=1 && n<=9 || n>=100 && n<=999 || n==10000) ans++;
n--;
}
cout << ans << endl;
}
