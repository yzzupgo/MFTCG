#include<bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(),v.end()
#define INF INT_MAX;
typedef long long ll;
using namespace std;

int main(){
  int time[5];
  int mark = 0 ,m = 124;
  rep(i,5){
    cin >> time[i];
    if(time[i]%10!=0&&time[i]%10<m){
      m=time[i]%10;
      mark = i;
    }
  }

  if(m==124) m=0;

  int ans =0;

  rep(i,5){
    if(i==mark) ans += time[i]/10*10;
    else ans += (time[i]+9)/10*10;
  }
  cout << ans + m << endl;
}