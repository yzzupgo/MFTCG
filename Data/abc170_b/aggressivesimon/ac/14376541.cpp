#include <bits/stdc++.h>
using namespace std;
int main() {
int A,B;
cin >> A >> B;
int D = B % 2;
int E = B / 2;
if ( D == 1 ) {
cout << "No" <<endl;
}
else if ( A > E ) {
cout << "No" <<endl;
}
else if ( A * 4 >= B ) {
cout << "Yes" <<endl;
}
else {
cout << "No" <<endl;
}
}
