#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b;
cin >> a >> b;
if(a >= 13) {
cout << b << endl;
} else if(5 < a < 13) {
cout << a/2 << endl;
} else {
cout << 0 << endl;
}
}
