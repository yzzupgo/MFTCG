#include<bits/stdc++.h>
using namespace std;
int main() {
  const int n=5;
  const int m=10;
  
  int a,p=m,o=0;
  for(int i=0;i<n;i++)
  {
    cin>>a;

    if(a%m!=0)
      p=min(p,a%m);
    o+=(a+m-1)/m*m;
  }

  cout<<o-(m-p);
}
