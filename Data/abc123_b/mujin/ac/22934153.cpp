#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main()
{
  ll lp=0,sum=0;
  ll a[5];ll max=10;ll index;
  for(ll i=0;i<5;i++)
  {
    cin>>a[i];sum+=a[i];
    if(a[i]%10!=0){lp=1;}
    if(a[i]%10>0)
    {
      if(max>a[i]%10){max=a[i]%10;index=i;}
    }
  }ll ans=0,flag=0;
  if(lp==0){cout<<sum;exit(0);}
  for(ll i=0;i<5;i++)
  {
    if(a[i]==a[index] and flag==0){flag=1;continue;}
    else
    {
    //  cout<<1<<" ";
      if(a[i]%10!=0)
      {
        ans+=(a[i]/10)*10+10;
      }
      else
      {
        ans+=a[i];
      }
    }
  }
  ans+=a[index];
  cout<<ans;
}
