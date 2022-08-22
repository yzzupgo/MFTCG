#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int Sum=0, min=10;
  vector<int> a(5);
  rep(i, 5){
    cin >> a.at(i);
    if(a.at(i)%10==0) Sum=Sum+a.at(i);
    else {
      if(min>a.at(i)%10) min=a.at(i)%10;
      Sum=Sum+a.at(i)-a.at(i)%10+10;
    }
  }
  cout << Sum-10+min << endl;
}