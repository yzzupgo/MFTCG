#include <iostream>
using namespace std;
int main(){
  int sum = 0;
  int min = 9;
  int x;
  for(int k=0; k < 5; k++){
    cin >> x;
    if(x%10 == 0)
      sum += x;
    else if(x%10 >=  min%10)
      sum += x + 10 - x%10;
    else{
      sum += min + 10 - min%10;
      min = x;
    }
  }
  cout << sum+min-10 << endl;
  return 0;
}
