#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> A(5);
  for(int &i:A)
    cin>>i;
  int N=0-10;
  for(int i:A)
    N+=(i+9)/10*10;
  int j=10;
  for(int i:A)
    if(i%10!=0)
      j=min(j,i%10);
  cout<<N+j<<endl;
}