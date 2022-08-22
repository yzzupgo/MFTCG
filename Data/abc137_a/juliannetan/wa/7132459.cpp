#include <bits/stdc++.h>
using namespace std;
int A, B;
int main() {
cin >> A;
cin >> B;
int c = A - B;
int d = A + B;
int e = A * B;
if (c < d and e < d){
cout << d;
} else if (d < c and e < c) {
cout << c;
} else {
cout << e;
}
return 0;
}
