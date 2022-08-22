#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

int sum_digit(int n){
  if( n == 0 ) return 0;
  else return n%10 + sum_digit(n/10);
}
int absolute(int a){
  if(a < 0) return -a;
  else return a;
}
int main()
{
  int i,sum = 0;
  vector<int> food(5);
  int localmax = 10;
  int number = 100;
  for( i = 0; i < 5; i++){
    cin >> food.at(i);
    if(food.at(i) % 10 > 0 && food.at(i) % 10 < localmax){
      localmax = food.at(i) % 10;
      number = i;
    }
  }
  
  for( i = 0; i < 5; i++){
    if(i == number) continue;
    if(food.at(i) % 10 == 0) sum += food.at(i);
  	else sum += food.at(i) + 10-(food.at(i) % 10);
  }
  if(number != 100) sum += food.at(number);
  cout << sum << endl;
}