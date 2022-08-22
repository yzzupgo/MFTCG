#include <bits/stdc++.h>
using namespace std;
int power(int a, int n) {
int res = 1;
while (n > 0) {
if (n & 1) res = res * a;
a = a * a;
n >>= 1;
}
return res;
}
int keta(int N) {
int j;
for (int i = 1; i <= 7; i++) {
if (N >= power(10,i) && N < power(10,i+1)) {
j = i + 1;
break;
}
}
return j;
}
int main() {
int N;
cin >> N;
int cnt = 0;
for(int i = 1; i <= N; i++) {
if (keta(i) % 2 == 1) cnt++;
}
cout << cnt << endl;
}
