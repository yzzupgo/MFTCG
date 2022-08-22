#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main()
{
  int a[5];
  rep(i,5) cin >> a[i];
  
  int ten[5] = {0};
  int max = 0,maxnum = 0;
  int cou = 0;
  for(int i = 0; i < 5; i++){
    while((a[i] + cou)  % 10 != 0){
      ten[i]++;
      cou++;
    }
    if(ten[i] > max){
      max = ten[i];
      maxnum = i;
    }
    cou = 0;
  }
  
  int ans = 0;
  rep(i,5){
    ans += a[i];
    if(i != maxnum){
      ans += ten[i];
    }
  }
  
  cout << ans << endl;
}