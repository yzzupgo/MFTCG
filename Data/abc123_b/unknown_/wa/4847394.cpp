#include <iostream>
using namespace std;
 
int main(){
  int a[5];
  for(int i = 0;i < 5;i++)cin >> a[i];
  for(int i = 0;i < 5;i++){
    for(int j = i + 1;j < 5;j++){
      if(a[i] < a[j]){
        a[i] ^= a[j];
        a[j] ^= a[i];
        a[i] ^= a[j];
      }
    }
  }
  for(int i = 1;i < 5;i++){
    if(a[0] < (a[i] + 10 * i))a[0] = a[i] + 10 * i;
  }
  cout << a[0] << endl;
  return 0;
}