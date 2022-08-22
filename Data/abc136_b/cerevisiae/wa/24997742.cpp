#include <iostream>
using namespace std;
int main() {
int n, a;
cin >> n;
for (int i = 1; i <= n; i++) {
if (i<10) a++;
else if (99<i and i <1000) a++;
else if (9999<i and i <100000) a++;
}
cout << a << endl;
}
