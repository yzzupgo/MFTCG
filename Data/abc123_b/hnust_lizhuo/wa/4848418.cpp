#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=110,a[10],ans=0,mini;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        if(n>a[i]%10)
        {
            mini=i;
            n=a[i]%10;
        }
    }
    for(int i=0;i<5;i++)
    {
        if(mini==i)
            ans=ans+a[i];
        else
        {
            if(a[i]%10==0)
                ans=a[i]+ans;
            //printf("%d ",((a[i]/10)+1)*10);
            else
                ans=ans+((a[i]/10)+1)*10;
        }
    }
    printf("%d\n",ans);
}
