#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main(){
   int A, B, C, D, E;
   std::cin >> A >> B >> C >> D >> E;
   std::vector<int> v = {A, B, C, D, E};
   int amari = 0;
   int max = v.at(0);
   for (int x : v){
      if (x % 10 != 0){
         int temp = 10 - x % 10;
         if (temp >= amari){
            amari = temp;
            max = x;
         }
      }
   }
   std::vector<int> V(5);
   for (int i=0; i<5; i++){
      if (v.at(i) % 10 != 0){
         int temp = 10 - v.at(i) % 10;
         V.at(i) = v.at(i) + temp;
      }
      else{
         V.at(i) = v.at(i);
      }
   }
   if (max % 10 == 0){
      std::cout << std::accumulate(v.begin(), v.end(), 0);
   } else{
      std::cout << std::accumulate(V.begin(), V.end(), 0) - (max + (10 - (max % 10))) + max << std::endl;
   }

}

