#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int a[5];
  for(int i=0;i<5;i++) cin >> a[i];
  int ans=0;
  int x=0;
  for(int i=0;i<5;i++){
    x=max((200-a[i])%10,x);
  }
  for(int i=0;i<5;i++){
    if(a[i]%10!=0){
      a[i]=a[i]-a[i]%10+10;
    }
    ans+=a[i];
  }
  cout << ans-x << endl;
}