#include <iostream>
#include <vector>
using namespace std;

	int main(){
		int a, b, sum=0, max=0;
		vector<int>rest;
		for (int i=0; i<5; i++){
			cin >> a;
			sum += a;
			b = 10 - a%10;
			if (a%10 != 0){
				rest.push_back(b);
			}
			if (max < a%10){
				max =b;
			}
		}
		for (int i=0; i<rest.size(); i++){
			sum += rest[i];
		}
		cout << sum - max << endl;
		return 0;
	}