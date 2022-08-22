#include <bits/stdc++.h>
using namespace std;

int main() {
  int ans = 0;
  int a = 0;
  int b = 11;
  for(int i=0;i<5;i++){
    int A;
    cin>>A;
    a = A%10;
    ans += ((A+9)/10)*10;
    if(a == 0){
      a+=10;
    }
    if(b > a){
      b=a;
    }
  }
  cout<<ans-10+b<<endl;
}