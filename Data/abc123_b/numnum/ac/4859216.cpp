#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
    vector<int > a(5);

    
    for(int i = 0;i<5;i++)
    {
        cin >> a[i];
    }

    int l=9;
    int m=0;
    int n=0;
    bool flag = true;
    for(int i = 0;i<5;i++)
    {
        if(((l%10) >= (a[i]%10)) && ((a[i]%10) != 0))
        {
            l = a[i];
            flag = false;
        }

        if(a[i]%10 == 0)
            n = a[i];
        else
            n = a[i] + 10 - (a[i]%10);
        
        m+=n;
    }
    
    if(flag == true)
    {
        cout << m << endl;
    }
    else
    {
        m+=(l%10);
        m -= 10;
        cout << m << endl;
    }

    return 0;    
}