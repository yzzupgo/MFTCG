#include <stdio.h>
#include <iostream>
#include <set>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    int sz[2][5];
    int min=0;
    for(int i=0;i<5;i++)
    {
        cin>>sz[0][i];
        sz[1][i]=10-sz[0][i]%10;
        if(sz[1][i]>sz[1][min])
        {
            min=i;
        }
    }
    int ans=0;
    for(int i=0;i<5;i++)
    {
        if(i!=min)
        ans=ans+sz[0][i]+sz[1][i];
        else
            ans=ans+sz[0][i];
    }
    cout<<ans<<endl;
    return 0;
}