#include<iostream>
#include<vector>
using namespace std;
int main()
{
int a, b;
int t, h, k;
cin >> a >> b;
t = a + b;
h = a - b;
k = a * b;
if (t <= h)
{
if (h <= k)
{
cout << k << endl;
}
else
{
cout << h << endl;
}
}
else
{
if (t <= k)
{
cout << k << endl;
}
else
{
cout << t << endl;
}
}
return 0;
}
