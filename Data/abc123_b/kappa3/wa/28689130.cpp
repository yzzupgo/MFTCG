#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int A, B, C, D, E;
  cin >> A >> B >> C >> D >> E;

  vector<int> vec;
  vec.push_back(A);
  vec.push_back(B);
  vec.push_back(C);
  vec.push_back(D);
  vec.push_back(E);

  int sum = 0;
  int min = 9;
  for(int i = 0; i < vec.size(); i++)
  {
    if(vec.at(i) % 10 != 0)
    {
      sum += (vec.at(i) / 10 + 1) * 10;
      if(min > vec.at(i) % 10) min = vec.at(i) % 10;
    }
    else
    {
      sum += vec.at(i);
    }
  }

  cout << sum - (10 - min) << endl;

  return 0;

} 