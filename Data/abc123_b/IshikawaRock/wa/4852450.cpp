#include<iostream>
using namespace std;
int main(){
  int a[5];
  int time=0;
  int k;
  
  cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
  for(int i=0;i<4;i++){
  	if(a[i]%10==0){
  	  time+=a[i];
  	}else if(a[i]<=10){
  	  time+=10;
  	}else{
  	 	 time+=(a[i]-(a[i]%10)+10); 
  	}
  }
  cout<<time+a[4]<<endl;
 return 0; 
}