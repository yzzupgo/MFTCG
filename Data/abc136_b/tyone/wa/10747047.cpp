#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using namespace std;
int main() {
int n;
cin >> n;
int keta_n = n;
int keta = 0;
while (keta_n > 0) {
keta_n /= 10;
keta++;
}
int ans = 0;
rep(i,(keta+1)/2) {
ans += 9 * pow(10,2*i);
}
if (keta % 2 != 0) {
ans += n - pow(10,keta-1) +1;
}
cout << ans << endl;
return 0;
}
