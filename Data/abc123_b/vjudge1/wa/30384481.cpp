#include<bits/stdc++.h>
#define int long long
using namespace std;
int _,n,m,t,x,y,z,k,s,sum;




signed main()
{
    int n=5;
    int a[6];
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++)
        if(a[i]%10<a[s]%10)s=i;
    for(int i=0; i<n; i++)
        if(i!=s)
            a[i]=(a[i]+9)/10*10;
    for(int i=0; i<n; i++)
        sum+=a[i];
    cout<<sum<<endl;









}
