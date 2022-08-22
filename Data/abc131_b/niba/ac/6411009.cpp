#include<iostream>
#include<cmath>
using namespace std;
int main (void) {
int N, L;
cin >> N >> L;
int minx = 1000;
for (int i = 0; i < N; i++) {
if (abs(L + i) < abs(minx)) {
minx = L + i;
}
}
int sum = 0;
for (int i = 0; i < N; i++) {
sum += L + i;
}
sum -= minx;
cout << sum << endl;
}
