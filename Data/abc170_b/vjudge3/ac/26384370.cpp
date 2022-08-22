#include <iostream>
using namespace std;
void solve()
{
int x, y;
cin >> x >> y;
for (int i = 0; i < x + 1; i++) {
if (2 * i + (x - i) * 4 == y) {
cout << "Yes";
return;
}
}
cout << "No";
}
int main()
{
solve();
return 0;
}
