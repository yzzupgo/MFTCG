#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
    vector<long long > a(5);

    
    for(int i = 0;i<5;i++)
    {
        cin >> a[i];
    }

    long long l=9;
    long long m=0;
    long long n=0;
    
    for(int i = 0;i<5;i++)
    {
        if(((l%10) > (a[i]%10)) && ((a[i]%10) != 0))
        {
            l = a[i];
        }

        if(a[i]%10 == 0)
            n = a[i];
        else
            n = a[i] + 10 - (a[i]%10);
        
        m+=n;
    }

    m+=(l%10);
    m -= 10;
    
    cout << m << endl;

    return 0;    
}