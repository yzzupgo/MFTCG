#include <cstdio>
#include <climits>
#include <cmath>
#include <iostream>
#define _for(i,n) for(int i = 0; i < n; i++)

using namespace std;



int main() {
  int a[5];
  _for(i,5) cin >> a[i];
  int b[5];
  _for(i,5) {
    b[i] = a[i]%10;
  }
  int sum = 0;
  _for(i,5) {
    sum += (a[i]/10+1)*10;
  }
  int minb = 9;
  _for(i,5) {
    if(b[i]==0) sum-=10;
    else minb = min(minb,b[i]);
  }
  sum += minb - 10;
  cout << sum << endl;
  

}