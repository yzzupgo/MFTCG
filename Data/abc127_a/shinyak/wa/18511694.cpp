#include <bits/stdc++.h>
using namespace std;
int main() {
int A, B;
cin >> A >> B;
if(A > 5 && A < 13) B /= 2;
if(A <= 5)B = A;
cout << B << endl;
return 0;
}
