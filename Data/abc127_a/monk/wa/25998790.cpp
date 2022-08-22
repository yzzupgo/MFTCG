#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
int a, b;
cin >> a >> b;
if (a < 6)
b = 0;
else if (a < 13)
b /= 2;
cout << a * b;
return 0;
}
