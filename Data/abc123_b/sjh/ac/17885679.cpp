#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(int a, int b){
	if (a%10!=0 and b%10!=0) return a%10 > b%10;
	else return a%10==0;
}
int main() {
	int arr[5];
	for (int i=0; i<5; i++) cin>> arr[i];
	sort(arr, arr+5, cmp);
	int total=0;
	for (int i=0; i<4; i++) {
		if (arr[i]%10==0) total+= arr[i];
		else total += (arr[i]/10)*10+10;
	}
	cout << total + arr[4] << endl;
}