#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
int x, y;
cin >> x >> y;
int turu = 0, kame = 0;
while (turu <= x)
{
kame = x - turu;
if (turu * 2 + kame * 4 == y) {
cout << "Yes" << endl;
return 0;
}
turu++;
}
cout << "No" << endl;
}
