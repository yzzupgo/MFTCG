#include <bits/stdc++.h>
using namespace std;
int main()
{
int X, Y;
bool flag = false;
cin >> X >> Y;
for (int i = 0; i <= X; i++) {
for (int j = X - i; j >= 0; j--) {
if (2 * i + 4 * j == Y)
flag = true;
}
}
cout << (flag ? "Yes" : "No") << endl;
}
