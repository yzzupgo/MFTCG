#include <iostream>
#include <string>
#include <vector>
using namespace std;
void a()
{
int n;
cin >> n;
string n_str = to_string(n);
for (int i = 0; i < 3; i++)
{
if (n_str[i] == n_str[i + 1])
{
cout << "Bad";
return;
}
}
cout << "Good";
return;
}
void b()
{
int n, l;
cin >> n >> l;
int lmax = l + n - 1;
int lmin = l;
int sum = (l - 1) * n + n * (n + 1) / 2;
if (lmax > 0 && lmin < 0)
{
}
else if (lmax <= 0)
sum -= lmax;
else
sum -= lmin;
cout << sum;
return;
}
long long int unable_to_div(long long int l, long long int c, long long int d)
{
long long int x = l / c;
long long int y = l / d;
long long int z = l / (c * d);
return l - x - y + z;
}
void c()
{
long long int a, b, c, d;
cin >> a >> b >> c >> d;
long long int l = a - 1;
long long int m = b;
long long int sum_l = unable_to_div(l, c, d);
long long int sum_m = unable_to_div(m, c, d);
cout << sum_m - sum_l;
}
int main(void)
{
b();
return 0;
}
