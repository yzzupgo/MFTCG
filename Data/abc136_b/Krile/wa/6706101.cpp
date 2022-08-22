#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <tuple>
#include <cstdio>
#include <numeric>
using namespace std;
int main() {
int N;
cin >> N;
vector<int> count[5];
int digit = 0;
int temp = N;
while (temp != 0) {
temp /= 10;
digit++;
}
if (digit == 1) {
cout << N << endl;
} else if (digit == 2) {
cout << 9 << endl;
} else if (digit == 3) {
cout << 9 + (N%100)*(N/100) + 1 << endl;
} else if (digit == 4) {
cout << 900 + 9 << endl;
} else if (digit == 5) {
cout << 900 + 9 + (N%10000)*(N/10000) + 1 << endl;
} else if (digit == 6) {
cout << 90000 + 900 + 9 << endl;
}
return 0;
}
