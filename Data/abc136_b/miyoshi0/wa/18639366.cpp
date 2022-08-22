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
cout << n - 90 << "\n";
else if (n <= 99999)
cout << n - 99990 << "\n";
else
cout << n - 99991 << "\n";
}
