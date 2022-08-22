#include <bits/stdc++.h>
using namespace std;

int main() {

	int arr[5];
	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

	int modd=arr[0]%10;
	int totalTime = 0;

	for(int i=0; i<5; i++) {
		totalTime+= (arr[i]/10*10);
		if(arr[i]%10!=0) totalTime+=10;
	}

	for(int i=1; i<5; i++) {
		if(arr[i]%10!=0 && (modd ==0 || arr[i]%10<modd)) modd=arr[i]%10;
	}

	if(modd!=0) cout << totalTime-10+modd;
	else cout << totalTime;


	return 0;
}