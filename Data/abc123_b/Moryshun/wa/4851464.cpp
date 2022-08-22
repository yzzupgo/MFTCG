#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main()
{
int N,M;
int x[5],a=0,k=11,b=2000;
for(int i=0;i<5;i++){
  cin>>x[i];
  if(x[i]%10!=0&&x[i]%10<k){
    k=x[i]%10;
  }
  x[i]=(x[i]+9)-((x[i]+9)%10);

  a+=x[i];
}
 if(k==11)k=0;
  cout<<a-10+k<<endl;


return 0;
}