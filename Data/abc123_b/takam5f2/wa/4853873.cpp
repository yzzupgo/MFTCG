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
  int all_ten = true;
  for (int i = 0; i < 5; i++) {
    if (a[i]%10 == 0) continue;
    if (a[i]%10 < last_tag) {
      last = a[i];
      last_tag = a[i] % 10;
      all_ten = false;
    }
  }

  if (all_ten == 0) {
    for (int i = 0; i < 5; i++) {
      sum += a[i];
    }
    cout << sum << endl;
    return 0;
  }

  int pass = false;
  for (int i = 0; i < 5; i++) {
    if (a[i] == last
        && pass == false) {
      pass = true;
      continue;
    }
    else
      sum += a[i];
    if (a[i] % 10 != 0){
      sum += (10 - a[i] % 10);
    }
  }

  cout << sum << endl;
  
  
  return 0;
}
