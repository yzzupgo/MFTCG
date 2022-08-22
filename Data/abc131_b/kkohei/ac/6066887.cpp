#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main() {
int N, L, min = 100,taste;
cin >> N >> L;
for(int i = 0; i < N; i++) {
if(i == 0) {
taste = L + i;
} else {
taste += L + i;
}
if(abs(L + i) < min) {
min = abs(L + i);
}
}
if(taste < 0) {
cout << taste + min << endl;
} else {
cout << taste - min << endl;
}
}
