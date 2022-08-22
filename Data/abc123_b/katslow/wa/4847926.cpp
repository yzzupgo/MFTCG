#include <bits/stdc++.h>
using namespace std;
int A,B,C,D,N,M;

int main() {
  ios::sync_with_stdio(false);
  int a[10];
  int b[10];
  int c[10];
  int min = 100000;
  int id = -1;
  for(int i = 0; i < 5; i++) {
    cin >> a[i];
    b[i] = a[i] % 10;
    c[i] = a[i] / 10;
    if(b[i] < min && b[i] != 0) {
      id = i;
      min = b[i];
    }
  }
int sum = 0;
  for(int i = 0; i < 5; i++) {
    if(i == id) {
      sum += c[i]*10;
      continue;
    }
    else if(a[i] % 10 == 0) sum += a[i];
    else sum += c[i]*10+10;
  }
  sum += b[id];
  cout << sum;



  return 0;
}
