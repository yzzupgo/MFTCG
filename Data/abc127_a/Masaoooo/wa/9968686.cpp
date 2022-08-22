#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007;
const long long INF = 1LL << 60;
int main()
{
int A, B;
cin >> A >> B;
if (A >= 13)
cout << B << endl;
else if (6 <= A <= 12)
cout << B / 2 << endl;
else
cout << 0 << endl;
}
