#include<bits/stdc++.h>
#define int long long
using namespace std;
int _,n,m,t,x,y,z,k,s,sum;




signed main()
{
    int n=5;
    int a[6]= {9};
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
        if(a[i]%10<a[s]%10&&a[i]%10!=0)s=i;
    for(int i=1; i<=n; i++)
        if(i!=s)
            a[i]=(a[i]+9)/10*10;
    for(int i=1; i<=n; i++)
        sum+=a[i];
        if(s==0)
            sum--;
    cout<<sum<<endl;









}
