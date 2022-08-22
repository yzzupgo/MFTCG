#include<algorithm>
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
int main(){
  int a[5],b[5];
  cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
  sort(a, a+5); 
  for(int i=0;i<5;i++){
  	b[i] = ((a[i]+(9))/10)*10;
  }
  int res[5];
  res[0] = b[0]+b[1]+b[2]+b[3]+a[4];
  res[1] = b[0]+b[1]+b[2]+a[3]+b[4];
  res[2] = b[0]+b[1]+a[2]+b[3]+b[4];
  res[3] = b[0]+a[1]+b[2]+b[3]+b[4];
  res[4] = a[0]+b[1]+b[2]+b[3]+b[4];
  sort(res,res+5);
  cout << res[0] << endl;
 
  return 0;
}