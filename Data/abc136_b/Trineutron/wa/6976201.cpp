#include <bits/stdc++.h>
using namespace std;
int digit(int n)
{
int d = 0;
while (n > 0) {
n /= 10;
d++;
}
return d;
}
int main()
{
int n, s = 0;
cin >> n;
for (int i = 1; i <= n; i++) {
if (digit(n) % 2 == 1) s++;
}
cout << s << endl;
}
