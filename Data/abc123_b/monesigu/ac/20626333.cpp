#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int A,B,C,D,E,F;
  cin>>A>>B>>C>>D>>E;
  F=((A+9)/10+(B+9)/10+(C+9)/10+(D+9)/10+(E+9)/10)*10;
  int minm=min((A+9)%10,min((B+9)%10,min((C+9)%10,min((D+9)%10,(E+9)%10))))+1;
  cout<<F+minm-10<<endl;

 return 0;     
}