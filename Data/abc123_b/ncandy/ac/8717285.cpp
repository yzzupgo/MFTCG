#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
	int sum = 0;
	int best = 10;
	for(int i=0; i<5; i++){
		int num; cin >> num;
		if(num % 10 != 0){
			best = min(best, num%10);
		}
		num = ((num+9)/10)*10;
		sum += num;
	}
	cout << sum - 10 + best << endl;
}