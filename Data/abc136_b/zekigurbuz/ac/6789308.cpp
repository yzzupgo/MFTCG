#include <iostream>
#include <cmath>
using namespace std;
int main() {
int n; cin >> n;
int tot = 0;
for (int i = 1; i <= n; i++) {
int d = 0;
int j = i;
while (j > 0) {
d++;
j /= 10;
}
tot += d % 2;
}
cout << tot << endl;
return 0;
}
