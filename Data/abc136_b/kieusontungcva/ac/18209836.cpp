#include <iostream>
using namespace std;
int n;
int main()
{
cin >> n;
if (n <= 9)cout << n;
else if (n >= 10 && n < 100)cout << 9;
else if (n >= 100 && n < 1000)cout << n - 100 + 1 + 9;
else if (n >= 1000 && n < 10000)cout << 909;
else if (n >= 10000 && n < 100000)cout << n - 10000 + 1 + 909;
else cout << 90909;
}
