#include <bits/stdc++.h>
#define rep(i,n) for (int i=0;i<(n);++i)
using namespace std;

int main(){
  int a[5];
  int time=0;
  int amari_min=9;
  rep(i,5){
    cin >> a[i];
    time += (a[i] + 9) / 10;
    int amari;
    amari = a[i] % 10;
    if (amari != 0){
      if (amari < amari_min) amari_min = amari;
    }
  }
  time = (time-1) * 10 + amari_min;
  cout << time;
}
      