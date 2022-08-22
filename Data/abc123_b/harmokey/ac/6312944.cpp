#include<iostream>
#include<algorithm>
using namespace std;
int main(void){
  int a = 0, r = 10;
  for(int i = 0; i < 5; i++){
    int A;
    cin >> A;
    a += (A + 9) / 10;
    int re = A % 10;
    if(re == 0) re = 10;
    r = min(r, re);
  }
  cout << 10 * a - 10 + r << endl;
  return 0;
}
