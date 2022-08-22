#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A[5], cnt = 10, answer = 0, tmp = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < 5; i++)
    {
        if (cnt >= A[i] % 10 && (A[i] % 10) != 0)
        {
            cnt = A[i] % 10;
            tmp = i;
        }
    }

    for (int i = 0; (i < 5); i++)
    {
        if (i == tmp)
        {
            continue;
        }
        if ((A[i] % 10) != 0)
        {
            A[i] += 10 - (A[i] % 10);
        }

        answer += A[i];
    }
    cout << answer + A[tmp] << endl;

    return 0;
}