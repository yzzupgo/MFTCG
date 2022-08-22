#include<iostream>
using namespace std;
int main() {
int N, L;
cin >> N >> L;
int taste_pi;
if (L > 0)
taste_pi = (N * (N + 1) / 2 + L * N - N) - (L);
else if (L <= 0 && L + N > 0)
taste_pi = (N * (N + 1) / 2 + L * N - N) - (L - 1);
else if (L + N <= 0)
taste_pi = (N * (N + 1) / 2 + L * N - N) - (L + N - 1);
cout << taste_pi << endl;
return 0;
}
