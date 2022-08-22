#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<pair<int, int> > data(5);
  for (int i=0; i<5; i++) {
    scanf("%d", &data.at(i).second);
    data.at(i).first = (data.at(i).second%10 == 0 ? 9 : data.at(i).second%10);
  }
  sort(data.begin(), data.end(), greater<pair<int, int> >());
  int ans=0;
  for (int i=0; i<4; i++) {
    ans += (data.at(i).second+9)/10*10;
  }
  ans += data.at(4).second;
  printf("%d\n", ans);
}