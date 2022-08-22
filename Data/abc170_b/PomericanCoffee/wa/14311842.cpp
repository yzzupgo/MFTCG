#include <bits/stdc++.h>
using namespace std;
int main()
{
int x, y;
cin >> x >> y;
for (int i = 0; i < x; i++) {
for (int j = x - i; j > i; j--) {
if ((i * 4) + (j * 2) == y) {
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
}
