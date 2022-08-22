#include<iostream>
using namespace std;

int main(){
	
	
	int a[5];
	int b[5];
	int i,min,min_i,sum;
	
	for(i=0;i<5;i++){
		cin >> a[i]; 
	}
	
	for(i=0;i<5;i++){
		b[i]=a[i]%10;
	}	
	
	min=10;
	for(i=0;i<5;i++){
		if(b[i]<min&&b[i]!=0){
			min=b[i];
			min_i=i;
		}
	}
	
	for(i=0;i<5;i++){
		if(i==min_i){
			sum+=a[i];
		}
		else{
			while(a[i]%10!=0){
				a[i]++;
			}
		sum+=a[i];
		}
		
	}
	
	cout << sum << endl;
	
return 0;
}