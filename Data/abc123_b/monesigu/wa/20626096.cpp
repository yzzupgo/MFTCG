#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int A,B,C,D,E,F;
  cin>>A>>B>>C>>D>>E;
  F=(A/10+1)*10+(B/10+1)*10+(C/10+1)*10+(D/10+1)*10+(E/10+1)*10;
  int minm=min(A%10,min(B%10,min(C%10,min(D%10,E%10))));
  cout<<F+minm-10<<endl;

 return 0;     
}