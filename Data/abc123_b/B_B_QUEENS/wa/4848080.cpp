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
    int mi = max({a % 10, b % 10, c % 10, d % 10, e % 10});
    cout << sum - mi << endl;
}
int main()
{
    input();
    solve();
}