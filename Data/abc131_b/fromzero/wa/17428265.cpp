#include <bits/stdc++.h>
using namespace std;
int main() {
int N, L, A=1000, ans=0;
cin >> N >> L;
vector<int> X(N);
for(int i = 0; i < N; i++) {
X.at(i) = L + i;
ans += X.at(i);
}
for(int i = 0; i < N; i++) {
if(abs(X.at(i)) < A) A = X.at(i);
}
cout << ans - A << endl;
}
