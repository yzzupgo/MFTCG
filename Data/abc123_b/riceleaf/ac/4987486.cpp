#include <iostream>

int main(){
  int a[5];
  for(int i=0;i<5;i++) std::cin >> a[i];
  int max=0;
  int imax=0;
  for(int i=0;i<5;i++){
    if((10-a[i]%10)>max && (a[i]%10!=0)){
      max=10-a[i]%10;
      imax=i;
    }
  }
  int time=0;
  //  std::cout << a[imax] << std::endl;
  for(int i=0;i<5;i++){
    if(i!=imax) time+=a[i]+9-((a[i]-1)%10);
  }
  time+=a[imax];
  std::cout << time << std::endl;
  return 0;
}
