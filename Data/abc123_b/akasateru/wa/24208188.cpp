#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;

int main(){
  int count=0;
  vector<int> v(5);
  rep(i,0,5) cin >> v[i];
  int p=9;
  rep(i,0,5) {
    int a = v[i];
    if (a%10>0 and a%10<p) p=a%10;
    if (a%10==0) count+=a;
    else count += (a/10+1)*10;
  }
  cout << count-(10-p) << endl;
}
