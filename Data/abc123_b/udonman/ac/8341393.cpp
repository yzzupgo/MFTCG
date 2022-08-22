#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
  vector<int> a(5);
  vector<int> b(5);
  int k=10;
  int l;
  int ans;
  for(int i=0; i<5; i++){
    cin >> a[i];
    if(a[i]%10>0){
      b[i]=a[i]/10+1;
      k = min(k,a[i]%10);
    }else{
      b[i]=a[i]/10;
    }
  }
    for(int i=0; i<5; i++){
      l +=b[i];
    }
    ans = (l-1)*10+k;
    cout << ans << endl;
  }
