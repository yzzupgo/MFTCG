#include <iostream>
using namespace std;
int main() {
int N, L; cin >> N >> L;
int taste = 0;
for (int i = 0; i < N; i++) {
taste += (L+i);
}
if (L <= 0 && L+N > 0) cout << taste << endl;
else if (L+N <= 0) cout << taste-(L+N-1) << endl;
else cout << taste-L << endl;
}
