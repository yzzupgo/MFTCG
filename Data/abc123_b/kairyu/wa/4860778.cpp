#include <iostream>
using namespace std;

int main() {
	int a[5];
	int r=10;
	cin >> a[0] >> a[1] >> a[2] >> a [3] >> a[4];
	for (int i=0; i<5; i++){
		if (r>a[i]%10){
			r=a[i]%10;	
		}
	}

	int ans;
	ans=((a[0]+9)/10+
	    (a[1]+9)/10+
	    (a[2]+9)/10+
	    (a[3]+9)/10+
	    (a[4]+9)/10)*10-10+r;
	cout << ans << endl;
	return 0;
}