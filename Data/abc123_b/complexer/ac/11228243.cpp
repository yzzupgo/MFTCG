#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> v(5);
  for(int i=0; i<5; i++) cin >>v[i];
  
  vector<int> num(5); for(int i=0; i<5; i++) num[i]=i;
  int ans=-1;
  do{
    int time=0;
    int next=0;
    for(int i=0; i<5; i++){
      time=next+v[num[i]];
      next=ceil((double)time/10)*10;
    }
    if(ans==-1) ans=time;
    else ans=min(ans, time);
  }while(next_permutation(num.begin(), num.end()));
  cout << ans <<endl;
}