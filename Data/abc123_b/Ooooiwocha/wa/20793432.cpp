#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int T;
class CustumSort {
  public:
    constexpr bool operator()(const int Left, const int Right) const {
      return Left%10>Right%10; 
    }
};
int main(){
  int ans=0;
  vector<int> vec;
  while(cin >> T) vec.push_back(T);
  sort(vec.begin(), vec.end(), CustumSort());
  for(int i=0; i<4; i++){
    ans+=vec.at(i)+(10-vec.at(i)%10);
  }
  ans+=vec.at(4);
  cout << ans << endl;
  return 0;
}