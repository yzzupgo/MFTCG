#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> v(5);
  for(int i=0; i<5; i++) cin >>v[i];
  int ans=-1;
  do{
    int temp=0;
    for(int i=0; i<5; i++){
      temp=ceil((double)temp/10)*10;
      temp+=v[i];
    }
    if(ans==-1) ans=temp;
    else ans=min(ans,temp);
  }while(next_permutation(v.begin(), v.end()));
  cout << ans << endl;
}