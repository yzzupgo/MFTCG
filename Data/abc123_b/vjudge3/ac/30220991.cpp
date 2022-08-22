#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    int L[6] = { 0 }, l[6] = { 0 }, minn = 10, flag = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> L[i];
        l[i] = L[i];
        while (l[i] > 10) l[i] %= 10;
        if (l[i] < minn && l[i] != 0)
        {
            minn = l[i];
            flag = i;
        }
    }
    int ans = L[flag];
    L[flag] = 0;
    for (int i = 0; i < 5; i++)
    {
        if (L[i] != 0 && L[i] % 10 != 0)
        {
            ans += L[i] / 10 * 10 + 10;
        }
        else ans += L[i];
    }
    cout << ans << endl;
    return 0;
}