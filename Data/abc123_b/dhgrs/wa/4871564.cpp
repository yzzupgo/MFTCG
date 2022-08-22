#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;

    int ans = A + B + C + D + E;
    int remain[5] = {A % 10, B % 10, C % 10, D % 10, E % 10};
    sort(remain, remain + 5);
    for (int i = 0; i < 4; i++)
    {
        ans += remain[i];
    }
    cout << ans << endl;
}
