#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a[6];
  int ans=0;
  for(int i=1;i<=5;i++)cin>>a[i];
  for(int i=1;i<=5;i++){
  	ans+=(a[i]/10)*10;
  }
  int t=0x3f3f3f3f;
  int p;
  for(int i=1;i<=5;i++){
  	int x=a[i]%10;
    if(x<t&&x){
   		t=x;
      	p=i;
    }
  }
  ans+=t;
  for(int i=1;i<=5;i++){
  	if(i==p)continue;
    if(a[i]%10)ans+=10;
  }
  cout<<ans<<endl;
}