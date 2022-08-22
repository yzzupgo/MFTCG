#include <iostream>

int main(void){
  int a[5];
  int min = 10;
  int sum = 0;
  for(int i = 0; i < 5; i++)
    std::cin >> a[i];
  for(int i = 0; i < 5; i++){
    if(0 < a[i] % 10 && a[i] % 10 < min){
      min = a[i] % 10;
    }
    sum += (a[i] % 10 == 0)? a[i] / 10 : a[i] / 10 + 1;
  }
  std::cout << sum * 10 + min % 10 - 10<< std::endl;
  return 0;
}