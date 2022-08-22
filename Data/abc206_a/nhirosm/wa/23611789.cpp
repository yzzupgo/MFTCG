#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int x = 0;
int ans = 0;
while(x < N) {
ans++;
x = x + ans;
}
cout << ans << endl;
}
