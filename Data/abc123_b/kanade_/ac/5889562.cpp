#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,sum=0,m=10;
  for(int i=0;i<5;i++){
    cin>>a;
    sum+=a+(a%10 ? 10-a%10 : 0 );
    m=(a%10 ? min(m,a%10) : m );
    cerr<<sum<<' '<<m<<endl;
  }
  cout<<sum-10+m;
  return 0;
}
