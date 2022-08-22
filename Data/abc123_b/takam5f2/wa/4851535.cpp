#include<bits/stdc++.h>
using namespace std;

#define INFTY (1 << 30);
typedef long long ll;

int main(void) {
  int a[5];
  int sum = 0;

  for (int i = 0; i < 5; i++) {
    cin >> a[i];
  }

  // choose minimum
  int last_tag = 9;
  int last = 199;
  for (int i = 0; i < 5; i++) {
    if (a[i]%10 == 0) continue;
    if (a[i]%10 < last_tag) {
      last = a[i];
      last_tag = a[i] % 10;
    }
  }

  for (int i = 0; i < 5; i++) {
    if (a[i] == last) continue;
    else
      sum += a[i];
    if (a[i] % 10 != 0){
      sum += (10 - a[i] % 10);
    }
  }
  sum += last;

  cout << sum << endl;
  
  
  return 0;
}
