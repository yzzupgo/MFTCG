#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c,d,e;
  cin>>a>>b>>c>>d>>e;
  cout<<10*(a/10+b/10+c/10+d/10+e/10+5)-min(a%10,min(b%10,min(c%10,min(d%10,e%10))));
}