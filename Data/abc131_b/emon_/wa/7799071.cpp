#include <iostream>
using namespace std;
int main() {
int n, l;
cin >> n >> l;
int all = (l + (l + n - 1)) * n / 2;
int min_abs = 1000;
int min_abs_taste = 0;
for(int i = l; i < l + n - 1; ++i) {
if(min_abs > abs(i)) {
min_abs = abs(i);
min_abs_taste = i;
}
}
cout << all - min_abs_taste << endl;
}
