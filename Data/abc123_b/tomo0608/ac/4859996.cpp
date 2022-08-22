#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
	int sum = 0;
	vector<int> v(5,0);
	for (int i = 0;i<5;++i){
		cin >> v[i];
		if (v[i]%10 == 0){
		sum += v[i];
		}else{
			sum = sum + (v[i]/10+1)*10;
		}
	}
	int ans = sum;
	for (int i = 0;i < 5;++i){
		if (v[i]%10 != 0){
			ans = min(ans,sum-(v[i]/10+1)*10 + v[i]);
		}
	}
	cout << ans << endl;
}