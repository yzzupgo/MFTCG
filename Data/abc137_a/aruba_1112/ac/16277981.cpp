#include <bits/stdc++.h>
using namespace std;
int main() {
int A, B;
cin >> A >> B;
int sum = A + B;
int mul = A * B;
int sub = A - B;
int M = max(sum, mul);
cout << max(M, sub) << endl;
}
