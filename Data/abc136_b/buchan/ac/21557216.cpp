#include <iostream>
using namespace std;
int numDigits(int n) {
int digits = 0;
while (n > 0) {
digits += 1;
n = n / 10;
}
return digits;
}
int main() {
int N;
int count = 0;
cin >> N;
for (int i = 1; i <= N; i++) {
int ret = numDigits(i);
if (ret % 2 == 1)
count++;
}
cout << count << endl;
return 0;
}
