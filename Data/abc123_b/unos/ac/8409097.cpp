#include <bits/stdc++.h>

using namespace std;

int main(){
  vector<int> a(5);
  int sum=0;
  for(int i=0;i<5;i++){
    cin >> a[i];
    sum+=a[i];
    if(a[i]%10==0){
      a[i]=10;
    }
    else{
      a[i]%=10;
    }
  }
  sort(a.rbegin(),a.rend());
  for(int i=0;i<4;i++){
    if(a[i]!=10){
      sum+=10-a[i];
    }
  }
  cout << sum << endl;
}
