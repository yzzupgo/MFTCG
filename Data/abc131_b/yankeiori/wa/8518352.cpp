#include <iostream>
#include <iomanip>
#include <cstdio>
#include <math.h>
#include <vector>
#include <map>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;
int main() {
int N, L;
cin >> N >> L;
int sum = 0;
for (int i = 1; i <= N; i++) {
sum += L + i - 1;
}
cout << sum << endl;
int eat = abs(L) < abs(L + N - 1) ? L : L + N - 1;
if (L * (L + N - 1) < 0) {
eat = 0;
}
cout << sum - eat << endl;
return 0;
}
