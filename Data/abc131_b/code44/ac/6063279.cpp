#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <functional>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define ll long long
#define INFTY 1 << 21
int main() {
int N, L;
cin >> N >> L;
int eat;
if (L >= 0)
eat = L;
else if (L + N - 1 < 0 && L < 0)
eat = L + N - 1;
else if (L < 0 && L + N - 1 >= 0)
eat = 0;
int ans = 0;
for (int i = 0; i < N; i++) {
ans += L + i;
}
cout << ans - eat << endl;
}
