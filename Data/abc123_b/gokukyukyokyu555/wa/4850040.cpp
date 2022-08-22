#include <bits/stdc++.h>
using namespace std;
 
int main() {
  vector<int> data(5);
  for (int i=0; i < 5; i++) cin >> data.at(i);
  int smallest = data.at(0);
  int smallestindex = 0;
  int answer = 0;
  for (int i=1; i < 5; i++) {
    if (data.at(i)%10 < smallest%10) {
      smallest = data.at(i);
      smallestindex = i;
    }
  }
  answer += data.at(smallestindex);
  for (int i=0; i < 5; i++) {
    data.at(i) = (data.at(i) + 9) / 10;
    data.at(i) *= 10;
  }
  for (int i=0; i < 5; i++) {
    answer += data.at(i);
  }
  answer -= data.at(smallestindex);
  cout << answer << endl;
}
