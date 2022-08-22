#include <bits/stdc++.h>
using namespace std;

signed main(){
int sum=0,MAX=0;
  for(int i=0;i<5;i++){
  int a;cin>>a;
    for(int j=0;j<10;j++){
    if((a+j)%10==0){sum+=a+j;MAX=max(MAX,j);}
    }
  }
                                     cout<<sum-MAX<<endl;
}
