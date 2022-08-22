#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int num = 5;
  int input[num], table[num], tmp, ans=0, mem, count=0;

  for (int i=0; i<num; i++) {
    cin >> input[i];
    table[i] = 1;
  }
  while (1) {
    int pre=0;
    for (int i=0; i<num; i++) {
      if (table[i]) {
        tmp = ans + input[i];
        cout << "tmp:" << tmp << endl;
        if (tmp%10 == 0) {
          pre = tmp;
          mem = i;
          break;
        } else if (pre%10 <= tmp%10) {
          pre = tmp;
          mem = i;
        }
        cout << "pre:" << pre << endl;
      }
    }
    table[mem] = 0;
    count++;
    ans = pre;
    if (count == 5) break;
    if (pre%10 != 0) {
      ans = (pre/10+1)*10;
    }
    cout << ans << endl;
  }

  cout << ans << endl;

  return 0;
}
