#include <iostream>
using namespace std;

int main(){
	int f[5],sum = 0, min = 10, temp;
	for(int i = 0; i < 5; i++){
		cin >> f[i];
		sum += f[i] / 10;
		temp = f[i] % 10;
		if(temp){
			sum++;
			if(temp < min){
				min = temp;
			}
		}
	}
	--sum *= 10;
	if(min != 10){
		sum += min;
	}
	cout << sum << endl;
	return 0;
}