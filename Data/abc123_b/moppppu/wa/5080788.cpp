#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
 
int main()
{
  int A, B, C, D, E;
  cin >> A >> B >> C >> D >> E;
  
  vector<int> dish_times = {A, B, C, D, E};
  int max_dish_time = A;
  int max_dish_num = 0;
  for(int i = 1; i < 5; i++){
    if(dish_times[i] > max_dish_time){
      max_dish_time = dish_times[i];
      max_dish_num = i;
    }
  }
  
  int total_time = 0;
  for(int i = 1; i < 5; i++){
    if(i == max_dish_num){
      total_time += dish_times[i];
    }else{
      total_time += (dish_times[i] + (10 - 1)) / 10 * 10;
    }
  }
 	
  cout << total_time;
}