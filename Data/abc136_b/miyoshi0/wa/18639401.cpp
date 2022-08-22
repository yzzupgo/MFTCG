#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;
int main()
{
int n;
cin >> n;
if (n <= 9)
cout << n << "\n";
else if (n <= 999)
cout << 9 + n - 99 << "\n";
else if (n <= 99999)
cout << n - 99999 + 9 + 900 << "\n";
else
cout << 9 + 900 + 90000 << "\n";
}
