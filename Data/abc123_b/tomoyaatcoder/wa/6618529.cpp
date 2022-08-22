#include<cstdio>
#include<iostream>
#include<ctype.h>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	int a[5], min, index = 0, sum = 0;
	for(int i = 0; i < 5; i++){
		cin >> a[i];
		if(i == 0){
			min = a[i] % 10;
		}
		else if(a[i] % 10 < min && a[i] % 10 != 0){
			min = a[i] % 10;
			index = i;
		}
	}
	for(int i = 0; i < 5; i++){
		if(a[i] % 10 == 0){
			sum += a[i];
		}
		else{
			sum += a[i] + 10 - a[i] % 10;
		}
	}
	sum += min - 10;
	cout << sum << endl;
	return 0;
}