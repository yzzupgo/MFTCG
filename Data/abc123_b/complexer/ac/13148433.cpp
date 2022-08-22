#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> v(5);
  int last;
  for(int i=0; i<5; i++){
    cin >> v[i];
    if (i==0) last=i;
    else if(v[i]%10 != 0 && (v[last]%10 > v[i]%10)) last=i;
  }
  
  int time=0;
  for(int i=0; i<5; i++){
    if(i==last) continue;
    else{
      time = ceil((double)time/10)*10;
      time += v[i];
    }
  }
  cout << ceil((double)time/10)*10+v[last] <<endl;
}