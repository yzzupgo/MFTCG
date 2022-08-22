#include<iostream>
using namespace std;
#define ll long long 
int main(){
  int A;
  int mn=9,i;
  int ans;
  for(i=0;i<5;i++){
    cin >> A;
    ans+=(A/10)*10+(A%10!=0)*10;
    mn=min(mn,A%10);
  }
  ans-=(mn!=0)*(10-mn);
  cout << ans;
  return 0;
}