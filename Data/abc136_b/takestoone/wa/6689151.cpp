#include<math.h>
#include<map>
#include<iostream>
#include <algorithm>
#include <string>
#include<vector>
#include<array>
#include<tuple>
#include<queue>
#include<stack>
#include<iomanip>
#include<bitset>
#include <list>
using namespace std;
inline int ceileing(int a, int b) {
return a % b == 0 ? a / b : a / b + 1;
}
int count_digit(int n) {
auto count = 0;
while (n > 0) {
++count;
n /= 10;
}
return count;
}
int main() {
int N; cin >> N;
cout << count_digit(N) << endl;
auto answer = 0;
for (size_t i = 1; i <= N; i++) {
if (count_digit(i) % 2 != 0)++answer;
}
cout << answer << endl;
}
