#include <bits/stdc++.h>
using namespace std;
int main()
{
int X, Y;
cin >> X >> Y;
for (int i = 1; i <= 100; i++) {
for (int j = 1; j <= 100; j++) {
if (i + j == X) {
int sum = i*2 + j*4;
if (sum == Y) {
cout << "Yes" << endl;
return 0;
}
}
}
}
cout << "No" << endl;
}
