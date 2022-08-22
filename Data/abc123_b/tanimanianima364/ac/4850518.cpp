#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int a[5],minv,sum=0,b[5];
  	for(int i=0;i<5;++i)cin>>a[i];
  	for(int i=0;i<5;++i){
      if(a[i]%10==0)b[i]=a[i]/10;
      else b[i]=a[i]/10+1;
      sum+=b[i];
    }sum*=10;
  	minv=a[0]%10;
  	for(int i=1;i<5;++i)if(a[i]%10!=0)minv=min(minv,a[i]%10);
    if(minv!=0)sum-=(10-minv);
  	cout<<sum<<endl;return 0;
  	
}