#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main(){
  vector<int> time(5);
  int min_time = 0;
  int counter = 0;
  int min = 10;

  for(int i = 0;i < 5;i++){
    cin >> time[i]; 
    int j = time[i] % 10;
    if(min > j && j != 0){
      min = j;
      min_time = time[i];
    }
  }
 
  for(int i =0;i < 5;i++){
    if(time[i] != min_time){
      int j = 0;
      if(time [i] % 10 != 0){
      j = ((time[i] / 10) + 1 ) * 10;
      }else j = time[i];
      counter += j;
    }else counter += min_time;
  }

  cout << counter << endl;
  

}
