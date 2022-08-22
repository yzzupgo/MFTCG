#include<bits/stdc++.h>
using namespace std;
int main() {
  const int n=5;
  const int m=10;
  
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];

  int p=m;
  for(int i=0;i<n;i++)
    if(a[i]%m!=0)
      p=min(p,a[i]%m);
  
  int o=-(m-p);
  for(int i=0;i<n;i++)
    o+=(a[i]+m-1)/m*m;

  cout<<o;
}
