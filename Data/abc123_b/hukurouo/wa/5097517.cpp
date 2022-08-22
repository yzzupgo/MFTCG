#include <bits/stdc++.h>
using namespace std;
 
int main() {
  
  int last = 0;
  vector<int> v(5);
  for (int i=0;i<5;i++){
    cin >> v.at(i);
  }
  
  int rinzi = 0;
  
  if(v.at(0)%10 == 0 && v.at(1)%10 == 0 && v.at(2)%10 == 0 && v.at(3)%10 == 0 && v.at(4)%10 == 0){
    rinzi = 10;
  }
 
 int v_amari = 9;
 for (int i=0;i<5;i++){
   if(v.at(i) % 10 < v_amari && v.at(i) % 10 != 0){
     v_amari = v.at(i) % 10;
     last = v.at(i);
   }
 }

   
 for (int i=0;i<5;i++){
   if(v.at(i) % 10 != 0){
   int amari = v.at(i) % 10;
   v.at(i) += (10 - (v.at(i) % 10));
 }}
  
 int time = 0;
 
 for (int i=0;i<5;i++){
   time += v.at(i);
 }
  
 time -= (last + (10 - (last % 10)));
 time += last; 
 time += rinzi;
  

   {cout << time  << endl;}
}
  
    