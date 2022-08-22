#include <iostream>
using namespace std;

int main(void){
  int a,b,c,d,e,tmp,i;
  cin >> a >> b >> c >> d >> e;
  int arr[5] = {a, b, c, d, e};
  for (i = 1; i < 5; ++i) {
    if (arr[i] % 10 == 0 || arr[i - 1] % 10 < arr[i] % 10) {
      arr[i - 1] ^= arr[i];
      arr[i] ^= arr[i - 1];
      arr[i - 1] ^= arr[i];
    }
  }
  for (i = 0; i < 5; ++i) {
    cout << i << ": " << arr[i] << "\n";
  }
  tmp = 0;
  for (i = 0; i < 4; ++i) {
    tmp += arr[i] % 10 == 0 ? arr[i] : arr[i] - (arr[i] % 10) + 10;
  }
  cout << tmp + arr[4];
}