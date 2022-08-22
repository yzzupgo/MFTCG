#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
const int MOD = 1000000007;
const int INF_32 = 1LL << 30;
const int64_t INF_64 = 1LL << 60;
int main()
{
int N;
cin >> N;
int digits = 1;
while (true) {
if (N >= pow(10, digits - 1) && N < pow(10, digits)) {
break;
}
digits++;
}
if (digits == 1) {
cout << N << endl;
} else if (digits == 2) {
cout << 9 << endl;
} else if (digits == 3) {
cout << 9 + N - 100 + 1 << endl;
} else if (digits == 4) {
cout << 9 + 900 << endl;
} else if (digits == 5) {
cout << 9 + 900 + N - 10000 + 1 << endl;
} else {
cout << 9 + 900 + 90000 << endl;
}
}
