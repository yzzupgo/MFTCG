#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
using namespace std;
int N, L, M[200], s;
int ea = 10000;
int main() {
cin >> N >> L;
for (int i = 0; i < N; i++){
M[i] = L + i;
}
for (int i = 0; i < N; i++) {
if (sqrt(ea * ea) > sqrt(M[i] * M[i])) {
ea = M[i];
}
}
for (int i = 0; i < N; i++) {
s += M[i];
}
cout << s - ea << endl;
return 0;
}
