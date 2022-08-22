#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int ans =1e9;
  vector<int> vec(5);
  for(int i =0; i < 5; i++){
    cin >> vec.at(i);
  }
  for(int i=0;i < 5; i++){
    int d =0;
    for(int j=0;j < 5;j++){
      if(i == j)d+= vec.at(j);
      else d+= (vec.at(j)+10-1)/10*10;
    }
    ans = min(ans,d);
  }
  cout << ans << endl;
}