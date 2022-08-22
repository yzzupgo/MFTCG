#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int input[5];
  for(int i = 0;i < 5;i++){
    cin >> input[i];
  }
  vector<int> n;
  for(int i = 0;i < 5;i++){
    n.push_back(input[i] % 10);
  }
  int lastDigit = -1;
  int index;
  for(int i = 1;i < 11;i++){
    auto itr = std::find(n.begin(), n.end(), i);
    if( itr != n.end() ) {
      lastDigit = *itr;
      index = itr - n.begin();
    }
  }
  int ans = 0;
  for(int i = 0;i < 5;i++){
    if(i == index){
      cout << i <<endl << input[i] << endl;
      ans += input[i];
    }else{
      if(n[i] == 0)
        ans += input[i];
      else
        ans += input[i] + 10 - n[i];
    }
  }
  cout << ans;
}