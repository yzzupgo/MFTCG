#include <iostream>
using namespace std;
int main(){
	int a[5],ned[5],mxned=0,sum=0;
	for(int i=0;i<5;i++){
		cin>>a[i];
		ned[i]=10-a[i]%10;
		if(ned[i]==10){
			continue;
		}
		mxned=max(ned[i],mxned);
	}
	for(int i=0;i<5;i++){
		if(ned[i]==mxned ){
			sum+=a[i];
			mxned=-1;
			continue;
		}
		else if(ned[i]==10){
			sum+=a[i];
		}
		else{
			sum+=a[i];
			sum+=ned[i];
		}
	}
	cout<<sum;
}
//FELAROSSO 2019