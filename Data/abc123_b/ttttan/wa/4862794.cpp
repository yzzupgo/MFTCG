#include<bits/stdc++.h>
using namespace std;
int main(){
  int a[5];
  int b[5];
  for(int i=0;i<5;i++){
    cin>>a[i];
    b[i]=ceil((double)a[i]/10)*10;
  }
  int ans=0;
  for(int i=0;i<5;i++)ans+=b[i];
  int s=10;
  for(int i=0;i<5;i++)s=min(s,a[i]%10);
  cout<<ans-10+s<<endl;
}
  