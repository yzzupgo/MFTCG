#include <iostream>
#include <vector>

int main() {
  std::vector<int> ABC(5);
  for(auto &abc: ABC)
    std::cin >> abc;
  
  int min_10 = 10;
  int sum = 0;
  for(auto &abc:ABC){
    int mod = abc%10;
    if(mod > 0 && mod < min_10)
      min_10 = mod;
    sum += ((abc+9)/10)*10;
  }
  if(min_10 != 10)
    sum += min_10 - 10;
  std::cout << sum << std::endl;
  return 0;
}
