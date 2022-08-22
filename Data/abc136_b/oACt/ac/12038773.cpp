#include <bits/stdc++.h>
using namespace std;
int digit(int N) {
int digit = 1;
while(N>=10) {
N /= 10;
digit++;
}
return digit;
}
int max_num(int n) {
int max=1;
if (n <= 0) {
return 0;
} else {
for (int i=0; i<n; i++) {
max *=10;
}
max--;
}
return max;
}
int main(int argc, char const *argv[]) {
int N, digN, num=0;
cin >> N;
digN = digit(N);
for (int i=digN; i>0; i--) {
if (i%2 != 0) {
if (i == digN) {
num += N - max_num(i-1);
} else {
num += max_num(i) - max_num(i-1);
}
}
}
cout << num << endl;
return 0;
}
