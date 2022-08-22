#include <bits/stdc++.h>
using namespace std;
int main() {
int A, B;
cin >> A >> B;
if (A >= 13){
cout << B << endl;
}
else if (A <= 5){
cout << 0 << endl;
}
else {
cout << B/2 << endl;
}
}
