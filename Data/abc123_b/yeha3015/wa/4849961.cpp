#include <bits/stdc++.h>
using namespace std;

int main(){
	int time;
	int remainder = 100;
	int sum = 0;
	for(int i = 0;i < 5;i++){
		cin >> time;
		if(remainder > time % 10 && time % 10 != 0){
			remainder = time % 10;
		}
		if(time % 10 == 0){
			sum += time;
		}else{
			sum += (time / 10 + 1) * 10;
		}
     // cout << remainder << endl;
	}
	cout << sum - 10 + remainder << endl;
}