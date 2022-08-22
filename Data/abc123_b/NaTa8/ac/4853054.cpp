#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> Time(5);
  for(int i = 0; i < 5; i++) cin >> Time.at(i);
  vector<int> Mod(5);
  for(int i = 0; i < 5; i++) Mod.at(i) = Time.at(i) % 10;
  for(int i = 0; i < 5; i++){
    if(Mod.at(i) != 0) Mod.at(i) = 10 - Mod.at(i);
  }
  int Max;
  Max = max(max(max(max(Mod.at(0), Mod.at(1)), Mod.at(2)), Mod.at(3)), Mod.at(4));
  int Sum = 0;
  for(int i = 0; i < 5; i++){
    Sum += Time.at(i);
    Sum += Mod.at(i);
  }
  Sum -= Max;
  cout << Sum << endl;
}