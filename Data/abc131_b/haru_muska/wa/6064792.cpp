#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <string.h>
#include <queue>
#include <vector>
#include <set>
using namespace std;
int main() {
int sum = 0, N, L, ans = 0, mini=1000000000;
cin >> N >> L;
vector<int>A(N);
for (int i = 0; i < N; i++) {
A[i] = L + i;
sum += A[i];
}
for (int i = 0; i < N; i++)
{
if (abs(sum-sum + A[i]) <= mini) {
mini = abs(sum - A[i]);
ans = sum - A[i];
}
}
cout << ans;
}
