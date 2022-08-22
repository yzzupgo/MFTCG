#include <bits/stdc++.h>
using namespace std;
int main() {
int a, b;
cin >> a >> b;
if(b <= 5) {
cout << 0;
} else {
if(b <= 12) {
cout << b / 2;
} else {
cout << b;
}
}
return 0;
}
