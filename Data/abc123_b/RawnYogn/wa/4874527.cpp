#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
	vector <int> a(4);
	vector <int> b(4);
	int sum	= 0;
	for (int i =0;i<5;i++){
		cin >> a[i];
		(a[i]%10)? b[i] = a[i]%10: b[i]=10;
		(a[i]%10)? sum+=(a[i]/10 + 1)*10 : sum+= a[i];
		}
	
	cout << sum - *min_element(b.begin(),b.end()) << "\n";
	return 0;
}
