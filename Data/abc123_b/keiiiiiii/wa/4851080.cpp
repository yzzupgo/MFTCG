#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b,c,d,e,time;
  vector<int> vec(5);
  cin >> a >> b >> c >> d >> e;
  time = a / 10 * 10 + b / 10 * 10 + c / 10 * 10 + d / 10 * 10 + e / 10 * 10;
  vec.at(0) = a % 10;
  vec.at(1) = b % 10;
  vec.at(2) = c % 10;
  vec.at(3) = d % 10;
  vec.at(4) = e % 10;
  sort(vec.begin(), vec.end());
  for(int i = 1; i < 5; i++){
    if(vec.at(i) != 0)
      time += 10;
  }
  cout << time + vec.at(0) << endl;
}