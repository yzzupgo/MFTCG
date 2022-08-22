#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int cc =999;
  int ans =0;
  for(int i=0; i < 5; i++){
    int d; cin >> d;
    ans += (d + 10-1)/10 *10;
    if(cc%10 >= d%10 && d%10 > 0){
      cc = d;
    }
  }
  if(cc != 999)ans += cc - (cc +10-1)/10*10;
  cout << ans << endl;
}
  