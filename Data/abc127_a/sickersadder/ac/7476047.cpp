#include <bits/stdc++.h>
using namespace std;
int main() {
int a, b;
cin >> a >> b;
if (6 <= a && a <= 12) b /= 2;
else if (5 >= a) b = 0;
cout << b << endl;
return 0;
}
