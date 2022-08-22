#include <iostream>
#include <cmath>
#include <string>
#include <stack>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <cstdio>
#include <cstring>
#include <queue>
using namespace std;
#define echo(A) cout << A << endl;
typedef long long llong;
int main() {
int N, L;
cin >> N >> L;
int dont_eat = 0;
int min = INT32_MAX;
int all_eat = 0;
for (int i = 0; i < N; ++i) {
all_eat += (L+i);
}
for (int i = 0; i < N; ++i) {
int sum = 0;
for (int j = 0; j < N; ++j) {
if(i == j) continue;
sum += (L+j);
}
if(abs(sum - all_eat) < min){
min = abs(sum - all_eat);
dont_eat = sum;
}
}
echo(dont_eat);
return 0;
}
