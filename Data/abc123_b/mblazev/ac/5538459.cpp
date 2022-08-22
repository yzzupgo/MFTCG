#include <bits/stdc++.h>
#define all(x) begin(x), end(x)
#define dbg(x) cerr << #x << " = " << x << endl
#define _ << ' ' <<
using namespace std;
using ll = long long;
using vi = vector<int>;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int sol = 0, x, m = 10;
    for (int i = 0; i < 5; ++i)
    {
        cin >> x;
        if (x % 10)
        {
            m = min(m, x % 10);
            x /= 10, x++, x *= 10;
        }
        sol += x;
    }
    m %= 10;
    if (m)
        sol += m - 10;
    cout << sol;
}
