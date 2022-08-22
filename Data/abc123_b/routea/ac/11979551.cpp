#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int>A(5);
  for(int i=0;i<5;i++)
    cin>>A.at(i);
  vector<int> B(5);
  for(int i=0;i<5;i++){
   if(A.at(i)%10!=0) B.at(i)=A.at(i)%10-1;
  else B.at(i)=9;
  
  }
  int min=10;
  for(int i=0;i<5;i++)
    if(B.at(i)<min)
      min=B.at(i);
  
  int ans=min-9;
  for(int i=0;i<5;i++)
    ans+=((A.at(i)-1)/10)*10+10;
  cout<<ans<<endl;
   return 0;
}