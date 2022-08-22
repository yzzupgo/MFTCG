#include <iostream>
using namespace std;
int main(){
  int sum = 0;
  int min = 0;
  int x;
  cin >> min;
  for(int k=0; k < 4; k++){
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
  cout << sum+min << endl;
  return 0;
}
