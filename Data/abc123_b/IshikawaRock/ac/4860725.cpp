#include<iostream>
using namespace std;
int main(){
  int a[5];
  int j;
  int b=9,n=0;
  int time=0;

  cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
  for( j=0;j<5;j++){
  	if(a[j]%10!=0 && a[j]%10<b){
    	b=a[j]%10;
      	n=j;
    }
  }
  
  for(int i=0;i<5;i++){
		if(i!=n){
          if(a[i]<=10){
            time+=10;
          }else if(a[i]%10!=0){
  	 	 	time+=(a[i]-(a[i]%10)+10); 
          }else{
          	time+=a[i];
          }
        }
  }
  if(b!=0){
  	time+=a[n];
  }
  cout<<time<<endl;
 return 0; 
}