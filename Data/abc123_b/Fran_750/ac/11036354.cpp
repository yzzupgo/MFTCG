#include"bits/stdc++.h"
using namespace std;

int main(){
	int A, B, C, D, E;
	cin >> A >> B >> C >> D >> E;
	int ans = (A + 9) / 10 * 10 + (B + 9) / 10 * 10 + (C + 9) / 10 * 10 + (D + 9) / 10 * 10 + (E + 9) / 10 * 10;
	ans -= max({ (A + 9) / 10 * 10 - A,(B + 9) / 10 * 10 - B ,(C + 9) / 10 * 10 - C ,(D + 9) / 10 * 10 - D ,(E + 9) / 10 * 10 - E });
	cout << ans << endl;
	return 0;
}