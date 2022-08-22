#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
 
int main() {
  vector<int> vi(5);
  cin >> vi[0] >> vi[1] >> vi[2] >> vi[3] >> vi[4];
 
  int sum=0;
  
  vector<int> v(5);
  for (int i=0;i<5;i++) {
    int a = vi[i] / 10;
    if (vi[i]%10 == 0) {
      v[i]=9;
      sum += a*10;
    } else {
      v[i] = vi[i]%10;
      sum += a*10+10;
    }
  }

  int b = 10 - *std::min_element(v.begin(), v.end());
  std::cout << sum - b << std::endl;
  return 0;
}
