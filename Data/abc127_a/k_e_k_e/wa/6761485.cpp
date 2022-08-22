#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b; cin >> a >> b;
if (a > 13) {
cout << b;
} else if (12 >= a && a > 6) {
cout << b / 2;
} else {
cout << 0;
}
return 0;
}
