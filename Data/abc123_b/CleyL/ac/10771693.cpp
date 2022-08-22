#include <iostream>
using namespace std;
int main(){
  int mn = 10;
  int sm = 0;
  for(int i = 0; 5 > i; i++){
    int n;cin>>n;
    sm += n/10*10+(n%10?10:0);
    if(n%10){
      mn = min(mn,n%10);
    }
  }
  cout << sm-10+mn << endl;
}
