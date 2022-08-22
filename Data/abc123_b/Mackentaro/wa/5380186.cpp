#include <iostream>
#include <vector>

int main() {
  std::vector<int> ABC(5);
  for(auto &abc: ABC)
    std::cin >> abc;
  
  int min_10 = 9;
  int sum = 0;
  for(auto &abc:ABC){
    int mod = abc%10;
    if(mod < min_10)
      min_10 = mod;
    sum += ((abc+9)/10)*10;
  }
  if(min_10!=0)
    sum += min_10 - 10;
  std::cout << sum << std::endl;
  return 0;
}
