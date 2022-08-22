#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[5];
    cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
    int min=10,count=0,m;
    for(int i=0;i<5;i++)
    {
        if(min>a[i]%10&&a[i]%10!=0)
            {min=a[i]%10;m=i;}
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]<10&&m!=i&&a[i]%10!=0)
            a[i]=10;
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]>10&&i!=m&&a[i]%10!=0)
            a[i]=(a[i]/10+1)*10;
    }
    for(int i=0;i<5;i++)
        count+=a[i];
        cout<<count;
    return 0;
}
