#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>

using namespace std;

const long double PI = (acos(-1));
const long long MOD = pow(10, 9) + 7;

int main()
{
    int M[5];
    int keta_1[5];
    int time = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> M[i];
        keta_1[i] = M[i] % 10;
        //cout << "keta1: " << keta_1[i] << endl;
    }

    int small = 0;
    for (int num = 1; num <= 9; num++)
    {
        for (int j = 0; j < 5; j++)
        {
            //cout << "num: " << num << "  j: " << j << endl;
            if (num == keta_1[j])
            {
                small = j;
                goto END;
            }
        }
    }
END:
    //cout << "small: " << small << endl;

    for (int i = 0; i < 5; i++)
    {
        if (i != small)
        {
            if (keta_1[i] != 0)
            {

                time += M[i] - M[i] % 10 + 10;
            }
            else
            {
                time += M[i];
            }

            //cout << "time: " << time << "  i: " << i << endl;
        }
    }
    time += M[small];
    cout << time;
}
