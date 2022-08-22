#include<cstdio>
#include<iostream>
#include<ctype.h>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	int a[5], min = 9, sum = 0;
	bool b = false;
	for(int i = 0; i < 5; i++){
		cin >> a[i];
		if(a[i] % 10 == 0){
			continue;
		}
		else{
			if(i == 0){
				min = a[i] % 10;
			}
			else if(a[i] % 10 < min){
				min = a[i] % 10;
			}
			b = true;
		}
	}
	if(!b){
		min = 0;
	}
	for(int i = 0; i < 5; i++){
		if(a[i] % 10 == 0){
			sum += a[i];
		}
		else{
			sum += a[i] + 10 - a[i] % 10;
		}
	}
	if(b){
		sum += min - 10;
	}
	cout << sum << endl;
	return 0;
}