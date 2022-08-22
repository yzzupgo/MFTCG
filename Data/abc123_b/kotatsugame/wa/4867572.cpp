#include<iostream>
using namespace std;
int s,m,a,t;
main()
{
  for(int i=5;i--;)
  {
    cin>>a;
    t=(a-1)/10*10;
    s+=t;
    if(m<t-a)m=t-a;
  }
  cout<<s-m<<endl;
}