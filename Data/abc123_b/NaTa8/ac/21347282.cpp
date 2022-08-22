#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> dishes(5);
  vector<pair<int, int>> rest_mod10(5);
  for (int i = 0; i < 5; i++)
  {
    cin >> dishes.at(i);
    rest_mod10.at(i) = make_pair((10-dishes.at(i)%10)%10,i);
  }
  sort(rest_mod10.begin(),rest_mod10.end());
  int ans = 0;
  for (int i = 0; i < 4; i++)
  {
    ans += dishes.at(rest_mod10.at(i).second);
    ans += rest_mod10.at(i).first;
  }
  ans += dishes.at(rest_mod10.at(4).second);
  cout << ans << endl;
}
