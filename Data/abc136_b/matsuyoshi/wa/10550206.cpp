#include <bits/stdc++.h>
#define rep(i,n) for(i = 0; i < n; i++)
using namespace std;
int main() {
int n;
cin >> n;
int keta = 0;
int temp = n;
while (temp != 0) {
temp /= 10;
keta++;
}
if (keta == 1) {
cout << n << endl;
} else if (keta == 2) {
cout << 9 << endl;
} else if (keta == 3) {
cout << 9 + (n-99) << endl;
} else if (keta == 4) {
cout << 110 << endl;
} else if (keta == 5) {
cout << 110 + (n-9999) << endl;
} else {
cout << 90909 << endl;
}
return 0;
}
