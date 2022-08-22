#include <iostream>
#include <string>
using namespace std;

int main(){
  int a[5];
  int loss[5];
  int maxloss = 0;
  int sum = 0;
  for(int i=0; i < 5; i++){
    cin >> a[i];
    loss[i] = 10 - (a[i] % 10);
    if(maxloss < loss[i]){
      maxloss = loss[i];
    }
    sum += (a[i] + loss[i]);
  }
  sum -= maxloss;
  cout << sum;
  return 0;
}
