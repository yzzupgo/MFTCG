#include <bits/stdc++.h>
using namespace std;

int main(){
  int A,B,C,D,E;
  cin>>A>>B>>C>>D>>E;
  cout<<(A+9)/10*10+(B+9)/10*10+(C+9)/10*10+(D+9)/10*10+(E+9)/10*10-10+min({A%10,B%10,C%10,D%10,E%10})<<endl;
}