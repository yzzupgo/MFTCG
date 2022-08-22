#include <bits/stdc++.h>
using namespace std;
bool solve(int n){
int cnt = 0;
for(int i = 0; i <= 5; i++) {
if(n / pow(10, i) == 0) {
cnt = i;
break;
}
}
if(cnt % 2 == 0) return true;
return false;
}
int main() {
int N, ans = 0;
cin >> N;
for (int i = 1; i <= N; i++) {
if (solve(i) == true) ans += 1;
}
cout << ans << endl;
}
