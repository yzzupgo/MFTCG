#include <bits/stdc++.h>
using namespace std;
int main()
{
int a, b;
cin >> a >> b;
int v = a - b;
int c = a + b;
int d = a * b;
if (v > c && v > d)
cout << v;
else if (c > v && c > d)
cout << c;
else if (d > v && d > c)
cout << d;
}
