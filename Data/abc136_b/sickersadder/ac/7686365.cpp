#include <bits/stdc++.h>
#define rep(i,n) for (int i = 1; i <= (n); i++)
using namespace std;
int main(void) {
int n;
cin >> n;
int ans = 0;
rep(i, n) {
if(to_string(i).length() % 2 == 1) {
ans++;
}
}
cout << ans << endl;
return 0;
}
