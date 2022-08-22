#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int cc =10;
  int ans =0;
  for(int i=0; i < 5; i++){
    int d; cin >> d;
    ans += (d + 10-1)/10 *10;
    cc = min(cc,d % 10);
  }
  ans += cc;
  cout << ans << endl;
}
  