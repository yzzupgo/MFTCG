#include <iostream>
#include <vector>
#include <utility>
using namespace std;
typedef pair<int, int> P_ii;
typedef pair<string, int> P_si;
int main() {
int N;
cin >> N;
int n = N;
int cnt = 0;
while (n / 10 != 0) {
cnt++;
n /= 10;
cerr << n << endl;
}
if (cnt <= 1) {
cout << min(9, N) << endl;
} else if (cnt <= 3) {
cout << min(N-99+9, 909) << endl;
} else if (cnt <= 5) {
cout << min(N-9999+909, 90909) << endl;
}
return 0;
}
