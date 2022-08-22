#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;


int a[1000005];
int b[1000005];
int main(){
	int i, min = 1000, k = -1, sum = 0;
	for(i = 0; i < 5; i++){
		cin >> a[i];
	}
	for(i = 0; i < 5; i++){
		if(a[i] % 10 < min && a[i] % 10 != 0){
			min = a[i] % 10;
			k = i;
		}
	}
	if(k == -1){
		for(i = 0; i < 5; i++){
			sum += a[i];
		}
		cout << sum;
		return 0;
	}
	for(i = 0; i < 5; i++){
		if(i != k && a[i] % 10 != 0){
			sum = sum + a[i] + (10 - a[i] % 10);
		}
		else{
			sum = sum + a[i];
		}
	}
	cout << sum;
} 

