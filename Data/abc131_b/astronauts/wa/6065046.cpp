#include <iostream>
using namespace std;
int main() {
int N, L; cin >> N >> L;
int taste = 0;
for (int i = 0; i < N; i++) {
taste += (L+i);
}
cout << taste-L << endl;
}
