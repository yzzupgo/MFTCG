#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int a,int b)
{
    
    return (a+9)%10>(b+9)%10;
}
int main()
{
    int a[6];
    for(int i=1;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a+1,a+6,cmp);
    int ans=0;
    for(int i=1;i<=4;i++)
    {

        if(a[i]%10!=0)
            ans+=a[i]-a[i]%10+10;
        else
            ans+=a[i];
        
    }
    cout<<a[5]<<' '<<ans<<endl;
    ans+=a[5];
    cout<<ans<<endl;
   // system("pause");

    return 0;
}

