#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,sum=0,m=10;
  for(int i=0;i<5;i++){
    cin>>a;
    sum+=a/10*10;
    m=a-a/10*10;
  }
  cout<<sum-10+m;
  return 0;
}
