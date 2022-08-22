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
else if (lmax < 0)
sum -= lmax;
else
sum -= lmin;
cout << sum;
return;
}
int main(void)
{
b();
return 0;
}
