#include <bits/stdc++.h>
using namespace std;
int main() {
int A, B, C, D, E, M;
cin >> A >> B;
M = A + B;
C = A - B;
if(M < C) M = C;
C = A * B;
if(M < C) M = C;
cout << M << endl;
}
