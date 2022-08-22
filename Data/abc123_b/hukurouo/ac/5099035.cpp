#include <bits/stdc++.h>
using namespace std;
 
 int cu(int x){
   x = ((x + 9)/ 10) * 10;
   return x;
 }

int main() {
  
  vector<int> v(5);
  for (int i = 0; i < 5; i++){
    cin >> v.at(i);
  }  
 
  int sum = 0;
  for (int i = 0; i < 5; i++){
    sum += cu(v.at(i));
  }  
 
  int last = 0;
   for (int i = 0; i < 5; i++){
     int amari = v.at(i) % 10;
     int amari_r = 10 - amari;
     if(last < amari_r && amari_r != 10){
     last = amari_r;
     }
  } 
  
 
  

   cout << sum - last << endl;
}
  
    