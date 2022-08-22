#include <bits/stdc++.h>

using namespace std;

int cmp(int a,int b)
{
    return a%10>b%10;
}
int main()
{
    int a[6];
    for(int i=0;i<5;i++)
        cin>>a[i];
    a[5]=0;
    sort(a,a+5,cmp);
    int ans=0;
    for(int i=0;i<5;i++)
    {
        ans+=a[i];
        if(a[i]%10!=0)
        {
            ans+=10-a[i]%10;
        }
    }
    //cout<<ans<<endl;
    for(int i=0;i<6;i++)
    {
        if(a[i]%10==0)
        {
            ans-=10-a[i-1]%10;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
