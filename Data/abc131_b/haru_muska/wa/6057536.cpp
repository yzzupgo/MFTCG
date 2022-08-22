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
int sum = 0, N, L, ans = 0,mini=10000000;
cin >> N >> L;
vector<int>A(N);
for (int i = 0; i < N; i++) {
A[i] = L + i;
sum += A[i];
}
for (int i = 0; i < N; i++)
{
if (abs(sum - A[i]) < mini) {
ans = sum - A[i];
mini = abs(sum-ans);
}
}
cout << ans;
}
