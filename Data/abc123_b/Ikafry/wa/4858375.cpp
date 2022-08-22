#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
   int order[5];
   int loss[5];
   int time = 0;

   for(int i=0;i<5;i++){
      cin >> order[i];
   }

   for(int i=0;i<5;i++){
      int hoge;
      hoge = order[i];
      for(int j=0;j<=9;j++){
         if(hoge % 10 != 0){
            hoge+=j;
         }else{
            loss[i] = j;
            break;
         }
      }
   }

   size_t index[5];
   iota(index, index+5, 0);

   stable_sort(index, index+5, [&loss](size_t i1, size_t i2){
      return loss[i1] < loss[i2];
   });

   for(int i=0;i<5;i++){
      while(time % 10 != 0) time++;
      time += order[index[i]];
   }

   cout << time << endl;

   return 0;
}
