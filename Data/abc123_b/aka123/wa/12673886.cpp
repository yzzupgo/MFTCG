#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  int ans=0,min=0,o,k,r=0;
  vector<int> a(5,0);
  for(int i=0;i<5;i++){
    int s;
    cin>>s;
    ans+=s;
    k=s%10;

    if(k!=0) a[i]=10-k;
  }
 
  o=a.size();

  for(int i=0;i<o;i++){
    if(min<a[i]&&a[i]!=0){
      min=a[i];
      r=i;
    }
  }
   if(r!=0) a[r]=0;

  for(int i=0;i<o;i++){
    if(a[i]!=0) ans=ans+a[i];
  }
  cout<<ans;
  return 0;
}