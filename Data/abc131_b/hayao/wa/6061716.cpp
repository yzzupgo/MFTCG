#include <bits/stdc++.h>
using namespace std;
int main()
{
int N, L;
int sum;
cin >> N >> L;
for (int i = 0; i < N; i++) {
}
if (L-1 > 0) {
sum = L*(N-1) + (N+2)*(N-1)/2 - (N - 1);
} else {
if (L+N-1 < 0) {
sum = L * N + (N+1)*N/2 - N - (L+N-1);
} else {
sum = L * N + (N+1)*N/2 - N;
}
}
cout << sum << endl;
}
