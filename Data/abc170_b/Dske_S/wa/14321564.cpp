#include <iostream>
#include <vector>
using namespace std;
int main() {
int x, y, s=1;
bool b = false;
int reg[2] = { 2,4 };
vector<int> sum;
cin >> x >> y;
for (int i = 0; i < x; i++) {
for (int j = 0; j < 2; j++) {
s *= reg[j];
sum.push_back(s);
}
}
for (unsigned i = 0; i < sum.size(); i++) {
if (sum[i] == y) {
b = true;
}
}
if (b == true) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
return 0;
}
