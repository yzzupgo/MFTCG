#include <bits/stdc++.h>
using namespace std;

int max10(int x){
  return (x+9)/10*10;
}
int sa10(int x){
  return max10(x)-x;
}

int main() {
  int A,B,C,D,E;cin>>A>>B>>C>>D>>E;
  int sum=max10(A)+max10(B)+max10(C)+max10(D)+max10(E);
  int sa=10-min({sa10(A),sa10(B),sa10(C),sa10(D),sa10(E)});
  cout<<sum-sa<<endl;
}