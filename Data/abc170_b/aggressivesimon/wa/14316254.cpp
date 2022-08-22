#include <bits/stdc++.h>
using namespace std;
int main() {
int A,B;
cin >> A >> B;
int X = B / 4;
int D = B / 2;
if ( D == 1 ) {
cout << "No" <<endl;
}
else if ( A > D ) {
cout << "No" <<endl;
}
else if ( A * 4 >= B ) {
cout << "Yes" <<endl;
}
else if ( ( A - 1 ) * 4 + 2 >= B ) {
cout << "Yes" <<endl;
}
else {
cout << "No" <<endl;
}
}
