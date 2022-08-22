#include <iostream>
using namespace std;
template <class T>
T abs(T x) {
if (x < 0) {
return -x;
} else {
return x;
}
}
int main(int ac, char **av) {
int N, L;
int k, minT;
cin >> N >> L;
k = 0;
minT = 65536;
for (int i = 0; i < N; i++) {
int T = L - 1 + i + 1;
if (abs(T) < abs(minT)) {
minT = T;
k = i;
}
}
cout << N * (L-1) + (N * (N + 1)) / 2 - (L - 1 + k + 1) << endl;
return 0;
}
