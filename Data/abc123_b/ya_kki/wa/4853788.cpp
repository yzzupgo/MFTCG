#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> time(5);
  for(int i = 0; i < 5; i++){
    cin >> time[i];
  }
  vector<int> amari(5);

  for(int i = 0; i < 5; i++){
    amari[i] = time[i] % 10; 
  }
  int sum = 0;
  int M = 9;
  for(int i = 0; i < 5; i++){
    if(amari[i] == 0){
      sum += time[i];
    }
    else{
      M = min(M,amari[i]);
      sum += (time[i] + (10 - amari[i]));
    }
  }
  sum -= (10 - M);
  cout << sum << endl;
  
  
  
}