#include<iostream>
#include<map>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
  vector<int> v(5);
  cin >> v[0];
  cin >> v[1];
  cin >> v[2];
  cin >> v[3];
  cin >> v[4];
  int temp = 0;
  int temp1= 0;
  int temp2 = 0;
  int total = 0;
  for(int i = 0 ; i < 5 ; ++i){
    if(v[i] % 10 != 0){
        temp2 = ( v[i] /10 + 1)*10 - v[i];
        if(temp < temp2 ){
            total +=  (temp1/ 10 + 1)*10;
            temp1 = v[i];
            temp = temp2;
        }
        else total += (v[i] / 10 + 1)*10;
    }
    else total += v[i];
  }
  total += temp1;
  total -= 10;
  cout << total << endl;
  return 0;
}
