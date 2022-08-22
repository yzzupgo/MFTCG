#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main(){
  vector<vector<int>> time(5,vector<int>(2));
  int min_time = 0;
  int counter = 0;
  int min = 10;
  int min_i = 10;

  for(int i = 0;i < 5;i++){
    cin >> time[i][0]; 
    time[i][1] = i;
    int j = time[i][0] % 10;
    if(min > j && j != 0){
      min = j;
      min_time = time[i][0];
      min_i = i;
    }
  }
  
  for(int i =0;i < 5;i++){
    if(time[i][1] != min_i){
      int j = 0;
      if(time [i][0] % 10 != 0){
      j = ((time[i][0] / 10) + 1 ) * 10;
      }else j = time[i][0];
      counter += j;
    }else counter += min_time;
  }

  cout << counter << endl;
  

}
