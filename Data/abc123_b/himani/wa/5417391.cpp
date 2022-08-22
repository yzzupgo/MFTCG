#include<iostream>
using namespace std;
int main()
{
  int a[5],n,x,m=9;
  for(int i=0;i<5;i++)
  {
    cin>>a[i];
    x=a[i]%10;
    if(x<m && x>0)
    {
      m=x;
      n=i;
    }
  }
  int sum=0,q;
  for(int i=0;i<5;i++)
  {
    if(i==n)
    {
      continue;
    }
    else {
      sum+=a[i];
      q=a[i]%10;
      q=10-q;
      sum+=q;
    }
  }
  sum+=a[n];
  cout<<sum;
  return 0;
}