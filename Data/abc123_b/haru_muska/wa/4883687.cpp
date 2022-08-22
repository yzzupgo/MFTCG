#include <iostream> 
using namespace std;

int mini(int a, int b) {

	return ((b==0)?a:(a < b)? a : b);
}
int main() {
	int a[5],tsuika=0;
	int min = 114514;
	int ans = 0;
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
	for (int i = 0; i < 5; i++)
	{
		min =mini(min, a[i]%10);
		if (a[i] % 10 != 0)tsuika += 10;
	}
	if (min == 114514)min = 0;
	ans = tsuika+a[0] / 10 * 10 + a[1] / 10 * 10 + a[2] / 10 * 10 + a[3] / 10 * 10 + a[4] / 10 * 10 -10+min;
	cout << ans;



	return 0;
}