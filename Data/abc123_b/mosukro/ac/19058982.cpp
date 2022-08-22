#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long long a[5];
    long long  ans=0;
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];

    long long min = 10;

    for(int i=0;i<5;i++)
    {
        long long tmp = a[i]%10;
        if(tmp<min && tmp!=0) min=tmp;

        ans+=(a[i]+9)/10;
    }

    ans*=10;

    ans-=(10-min);
    
    cout << ans << endl;

    return 0;
}