#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a[5];
  int sum=0,max=0,temp=0;
  for(int i=0;i<5;i++){
    scanf("%d",&a[i]);
    bool p=1;
    if(a[i]%10==0) 
      p=0;   
    sum+=a[i]+p*(10-a[i]%10);
    if(max<(10-a[i]%10)&&a[i]%10!=0){ 
      max=10-a[i]%10;
      temp=i;  
    }
  }
  bool p=1; 
  if(a[temp]%10==0) 
    p=0;   
  sum-=p*(10-a[temp]%10);  
  printf("%d\n",sum);
  return 0;
}
