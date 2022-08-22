#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
if (N == 10000)
cout << 9 + 900 + 1 << endl;
else if (N > 99)
cout << 9 + (N - 99) << endl;
else if (N > 8)
cout << 9 << endl;
else
cout << N << endl;
}
