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
cout << sum - A[0] << endl;
return 0;
}
