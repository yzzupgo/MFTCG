#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int tmpNum = N;
int NSize = 0;
while (tmpNum > 0) {
tmpNum /= 10;
NSize++;
}
int count = 0;
if (NSize % 2) {
int minInTopDigit = pow(10, NSize - 1);
count = N - minInTopDigit + 1;
for (int i = 1; i < NSize - 1; i++) {
if ((i % 2)) count += 9 * pow(10, i - 1);
}
} else {
for (int i = 1; i <= NSize - 1; i++) {
if ((i % 2)) count += 9 * pow(10, i - 1);
}
}
cout << count << endl;
return 0;
}
