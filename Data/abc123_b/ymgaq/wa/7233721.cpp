#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    int a[5];
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];

    int max_wait_time = 0;
    int max_wait_idx = 0;

    for(int i=0;i<5;++i)
    {
        int wait_time = 10 - a[i] % 10;
        if(wait_time > max_wait_time)
        {
            max_wait_idx = i;
            max_wait_time = wait_time;
        }
    }

    int sum_time = 0;

    for(int i=0;i<5;++i)
    {
        if(i == max_wait_idx)
        {
            sum_time += a[i];
        }
        else if(a[i] % 10 == 0)
        {
            sum_time += a[i];
        }
        else
        {
            sum_time += a[i] + (10 - a[i] % 10);
        }               
    }

    cout << sum_time << endl;
    return 0;
}