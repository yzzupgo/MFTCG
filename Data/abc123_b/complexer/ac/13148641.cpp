#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> v(5);
  vector<int> num(5);
  for(int i=0; i<5; i++){
    cin >> v[i];
    num[i]=i+1;
  }
  int ans=-1;
  do{
    int temp=0;
    for(int i=0; i<5; i++){
      temp=ceil((double)temp/10)*10+v[num[i]-1];
    }
    if(ans<0) ans=temp;
    else ans=min(ans, temp);
  }while(next_permutation(num.begin(), num.end()));
  cout << ans <<endl;
}