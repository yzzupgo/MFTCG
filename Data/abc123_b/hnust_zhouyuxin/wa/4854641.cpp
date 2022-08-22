#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string.h>
using namespace std;
int main()
{
    int a[5],s,i,b[5],c;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
        for(i=0;i<5;i++)
        {
            b[i]=10-a[i]%10;
        }
        sort(b,b+5);
        c=0;
        for(i=0;i<5;i++)
        {
            if(b[i]!=10)
            c=max(c,b[i]);
        }
    s=0;
    for(i=0;i<5;i++)
    {
        s=a[i]+s;
    }
     for(i=0;i<4;i++)
     {
         if(b[i]!=10&&b[i]!=c)
         s+=b[i];
     }
    printf("%d",s);
    return 0;
}
