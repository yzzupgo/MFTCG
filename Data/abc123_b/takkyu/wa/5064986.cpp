#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  int h[5];
  int hm[5];
  int totime;
  for (int i =0;i<5;i++) cin >> h[i];

  for (int i =0;i<5;i++){
    hm[i] = h[i] % 10;
    if (hm[i] == 0){
      totime += h[i];
    }else{
      totime += h[i]-hm[i]+10;
    }
  }
  totime -= *max_element(hm,hm+5);
  cout << totime;
  
}
