#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
constexpr double EPS = 1e-12;
bool f(int x) {
int keta = 0;
while(x) {
x /= 10;
keta++;
}
return keta % 2 == 1;
}
int main() {
int n;
cin >> n;
int ans = 0;
for(int i = 1; i <= n; i++) {
if(f(i)) ans++;
}
cout << ans << endl;
}
