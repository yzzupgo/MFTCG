#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int time_spent=0;
  int dish_time;
  int max_time_use_dish=10;
  for(int i=0; i<5; i++){
    cin >> dish_time;
    if((dish_time%10!=0) && (dish_time%10<max_time_use_dish)){
      max_time_use_dish = dish_time%10;
    }
    time_spent += (dish_time/10+1)*10;
  }
  cout << time_spent - (10 - max_time_use_dish) << endl;
}