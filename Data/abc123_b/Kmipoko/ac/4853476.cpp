#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
	int all=0;
  	int a[5]={0},b=0,c=10;
    for(int i=0;i<5;i++){
    	cin>>a[i];
	if(a[i]%10!=0){all+=10;}
      	b=a[i]/10;
	all+=b*10;
	if(a[i]-b*10<c&&a[i]%10!=0){c=min(c,a[i]-b*10);}
    }
  	cout<<all-(10-c)<<endl;
  	return 0;
}