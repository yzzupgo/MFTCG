#include <bits/stdc++.h>
using namespace std;

int ans;
int mn = 1000;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        ans += x / 10;
        if (x % 10)
        {
            ans++;
            mn = min(x % 10, mn);
        }
    }
    mn %= 10;
    if (mn != 0)
        ans--;
    cout << ans * 10 + mn << endl;
    return 0;
}