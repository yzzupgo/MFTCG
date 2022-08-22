#include <iostream>
#include <vector>
#include<stdio.h>
#include <cmath>
using namespace std;
int main()
{
int N,L;
cin >> N >> L;
int pie = N * (L - 1);
for (int i = 0; i < N; i++) {
pie = pie + i + 1;
}
int sabun;
if (L > 0) { sabun = L; }
else if (N <= abs(L)) { sabun = L + N - 1; }
else sabun = 0;
cout << pie - sabun;
}
