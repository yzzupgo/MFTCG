#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int a[5];
    int K;

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    int remainder = 9;

    for (int i = 0; i < 5; i++)
    {
        int tmp = 0;
        tmp = a[i] % 10;
        if(tmp < remainder)
            if(tmp != 0)
                remainder = tmp;
    }

    int ans = 0;
    for (int i = 0; i < 5; i++)
    {
        if(a[i] % 10 != 0)
            a[i] = (a[i] / 10 + 1) * 10;
        ans = ans + a[i];
    }
    cout << ans - 10 + remainder << endl;
}