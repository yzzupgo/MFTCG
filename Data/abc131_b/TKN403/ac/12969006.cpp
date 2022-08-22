#include<iostream>
using namespace std;
int main() {
int N, L;
cin >> N >> L;
int ans = 0;
for (int i = L; i < N + L; i++) {
ans += i;
}
if (N + L - 1 < 0) {
ans -= N + L - 1;
}
else if (L > 0){
ans -= L;
}
cout << ans << endl;
return 0;
}
