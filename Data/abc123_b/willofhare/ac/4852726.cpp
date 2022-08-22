#include <bits/stdc++.h>
using namespace std;

  int main(){
    int a[5];
    int s=0;
    for (int i;i<5;i++){
      cin >> a[i];
      s+=(a[i]+9)/10*10;
      a[i]=(10-a[i]%10)%10;
    }
    sort(a,a+5);
    cout << s-a[4] << endl;
  }