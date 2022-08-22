#include <bits/stdc++.h>
using namespace std;
int main(){
int N, L, sum = 0;
cin >> N >> L;
vector<int> A(N, L);
for (int i = 0; i < N; i++) {
A[i] += i;
sum += A[i];
}
sort(A.begin(), A.end());
int mn = 1e3;
for (int i = 0; i < N; i++) {
int dis = abs(A[i]);
if (dis < abs(mn)) {
mn = A[i];
}
}
sum -= mn;
cout << sum << endl;
return 0;
}
