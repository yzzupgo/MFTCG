#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define Cout(s) cout << s << endl;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1ll << 60;
ll MOD = 1e9 + 7;

int main()
{

    //int a, b, c, d, e;
    vector<int> a(5);
    int idx;
    int mini = 9;
    REP(i, 5)
    {
        int x;
        cin >> x;
        int tmp = x % 10;
        if (tmp != 0 && tmp < mini)
        {
            idx = i;
            mini = tmp;
        }
        a[i] = x;
    }
    int ans = 0;
    REP(i, 5)
    {
        if (i != idx)
        {
            if (a[i] % 10 != 0)
            {
                int x = (10 - a[i] % 10) + a[i];
                ans += x;
            }
            else
            {
                ans += a[i];
            }
        }
        else
        {
            ans += a[i];
        }
    }

    cout << ans;
    return 0;
}