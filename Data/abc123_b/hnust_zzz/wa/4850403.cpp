#include <iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int a[5],k,i,a1[5];
    for(int i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
        a1[i]=a[i]%10;
    }
    int zj=1;
    for(int i=0; i<5; i++)
    {
        if(a1[i]!=0)
        {
            zj=0;
        }
    }
    if(zj==1)
        k=0;
    else
        for(i=0,k=9; i<5; i++)
        {
            if(a1[i]<k&&a1[i]!=0)
                k=a1[i];
        }
    for(int i=0; i<5; i++)
    {
        if(a[i]%10==0)
            k+=a[i];
        else
            k+=((a[i]/10)+1)*10;
    }
    printf("%d",k);
}
