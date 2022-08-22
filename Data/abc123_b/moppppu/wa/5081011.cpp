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
  int over_time;
  int min_over_time = dish_times[0] % 10;
  int min_over_time_num = 0;
  for(int i = 1; i < 5; i++){
    over_time = dish_times[0] % 10;
    if(min_over_time > over_time && over_time != 0){
      min_over_time = over_time;
      min_over_time_num = i;
    }
  }
  
  int total_time = 0;
  for(int i = 0; i < 5; i++){
    over_time = dish_times[0] % 10;
    if(i==min_over_time_num){
      total_time += dish_times[i];
    }else if(over_time==0){
      total_time += dish_times[i];
    }else{
      total_time += dish_times[i] + (10 - over_time);
    }
  }
  
  cout << total_time;
}