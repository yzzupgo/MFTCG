#include<cmath>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
 
int main()
{
  int A, B, C, D, E;
  cin >> A >> B >> C >> D >> E;
  
  vector<int> dish_times = {A, B, C, D, E};
  int time_cost;
  int max_time_cost = 10 - (dish_times[0] % 10);
  int max_time_cost_num = 0;
  for(int i = 1; i < 5; i++){
    time_cost = 10 - (dish_times[i] % 10);
    if(max_time_cost < time_cost && time_cost < 10){
      max_time_cost = time_cost;
      max_time_cost_num = i;
    }
  }
  
  int total_time = 0;
  for(int i = 0; i < 5; i++){
    if(i==max_time_cost_num){
      total_time += dish_times[i];
    }else if(dish_times[i]%10==0){
      total_time += dish_times[i];
    }else{
      total_time += dish_times[i] + 10 - (dish_times[i] % 10);
    }
  }
  
  cout << total_time;
}