#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int a, b, c, d, e, x, y, z, h, w;
int sum = 0;
void input()
{
    cin >> a >> b >> c >> d >> e;
    sum += a + b + c + d + e;
}

void solve()
{
    sum += a % 10 == 0 ? 0 : 10 - a % 10;
    sum += b % 10 == 0 ? 0 : 10 - b % 10;
    sum += c % 10 == 0 ? 0 : 10 - c % 10;
    sum += d % 10 == 0 ? 0 : 10 - d % 10;
    sum += e % 10 == 0 ? 0 : 10 - e % 10;

    int m = 10;
    if (a % 10 != 0)
    {
        m = min(m, a % 10);
    }
    if (b % 10 != 0)
    {
        m = min(m, b % 10);
    }
    if (c % 10 != 0)
    {
        m = min(m, c % 10);
    }
    if (d % 10 != 0)
    {
        m = min(m, d % 10);
    }
    if (e % 10 != 0)
    {
        m = min(m, e % 10);
    }

    if (m == 10)
    {
        cout << sum << endl;
    }
    else
    {
        cout << sum - m << endl;
    }
}
int main()
{
    input();
    solve();
}