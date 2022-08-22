#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string.h>
using namespace std;
int main()
{
    int a[5],s,i,b[5],k=0;
    for(i=0; i<5; i++)
        scanf("%d",&a[i]);
    for(i=0; i<5; i++)
    {
        if(a[i]%10!=0)
        {
            b[i]=10-a[i]%10;
            k++;
        }
    }
    sort(b,b+k);
    s=0;
    for(i=0; i<5; i++)
    {
        s=a[i]+s;
    }
    for(i=0; i<k-1; i++)
    {
            s+=b[i];
    }
    printf("%d",s);
    return 0;
}
