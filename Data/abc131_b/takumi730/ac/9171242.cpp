#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <iostream>
#include <string>
#include<algorithm>
#include <vector>
#include <cassert>
#include<cmath>
using namespace std;
int main() {
int N, L;
int i;
int absmin = 9999999;
int apple[300];
int sum = 0;
cin >> N >> L;
for (i = 0; i < N; ++i) {
apple[i] = L + i;
sum += apple[i];
}
for (i = 0; i < N; ++i) {
if (abs(apple[i]) < abs(absmin)) {
absmin = apple[i];
}
}
cout << sum - absmin << endl;
}
