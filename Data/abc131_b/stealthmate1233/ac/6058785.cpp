#include<bits/stdc++.h>
using namespace std;
int main() {
int N, L;
cin >> N >> L;
int ans = (N * L) + (N * (N + 1) / 2) - N;
ans -= L - 1;
if(L <= -N) ans -= N;
else if(L <= 0) ans -= 1 - L;
else ans -= 1;
cout << ans << endl;
}
