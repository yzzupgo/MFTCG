#include <bits/stdc++.h>
using namespace std;
int main()
{
int a, b;
cin >> a >> b;
int v = a - b;
int c = a + b;
int d = a * b;
while ((a >= -100 && a <= 100) && (b >= -100 && b <= 100))
{
if (v > c && v > d)
cout << v;
else if (c > v && c > d)
cout << c;
else if (d > v && d > c)
cout << d;
break;
}
}
