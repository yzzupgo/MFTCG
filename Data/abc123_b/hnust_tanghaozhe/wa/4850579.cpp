#include <iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
bool cmp(int a,int b)
{
    return a%10>b%10;
}
int main()
{
    int a[5],s=0,j,r;
    for(int i=0;i<5;i++)
    scanf("%d",&a[i]);
    sort(a,a+5,cmp);
    for(j=0;j<5;j++)
    {
        if(a[j]%10==0)
            break;
    }
    r=a[j-1];
    a[j-1]=a[4];
    a[4]=r;
    for(int i=0;i<5;i++)
    {
        if(i==4)
            s+=a[i];
        else
        {
        if(a[i]%10!=0)
            s+=a[i]+10-a[i]%10;
        else s+=a[i];
        }
    }
    cout<<s<<endl;
    return 0;
}
