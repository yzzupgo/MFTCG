#include <bits/stdc++.h>

using namespace std;

int main(){
  vector<int> a(5);
  int sum=0;
  for(int i=0;i<5;i++){
    cin >> a[i];
    sum+=a[i];
    a[i] %= 10;
  }
  sort(a.rbegin(),a.rend());
  for(int i=0;i<4;i++){
    if(a[i]!=0){
      sum+=10-a[i];
    }
  }
  cout << sum << endl;
}
