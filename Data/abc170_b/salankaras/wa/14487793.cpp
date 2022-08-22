#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(int argc, char const *argv[])
{
int a, b;
cin >> a >> b;
double x = ((double)b-2*a)/2, y = (4*a-(double)b)/2;
if(x >= 0 && y >= 0)
{
if(x <= a && y <= a)
{
if(x+y == a && (4*x+2*y) == b)
{
cout << "Yes";
return 0;
}
}
}
cout << "No";
return 0;
}
