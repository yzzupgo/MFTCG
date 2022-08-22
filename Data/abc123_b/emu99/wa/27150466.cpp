#include<bits/stdc++.h>
using namespace std;
int main() {
  const int n=5;
  
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];

  int p=10;
  for(int i=0;i<n;i++)
    if(a[i]%10!=0) p=min(p,a[i]%10);
  if(p==10) p=0;
  
  int o=-(10-p);
  for(int i=0;i<n;i++)
    o+=(a[i]+9)/10*10;

  cout<<o;
}
