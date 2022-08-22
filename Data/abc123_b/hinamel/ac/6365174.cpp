#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
#include<utility>
#include<functional>
#include<stack>
#include<queue>
#include<cmath>

#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)
# define MOD 1000000000+7
# define INF 1000000000
typedef long long ll;
using namespace std;
int gcd(int a, int b) { return b ? gcd(b, a%b) : a; }


int main() {
	int a[5] = {};
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
	int aaaa = a[0] + a[1] + a[2] + a[3] + a[4];

	rep(i, 5) {
		if (a[i] % 10 != 0) {
			a[i] = (((a[i] / 10) * 10)+10) - a[i];
		}
		else {
			a[i] = 0;
		}
	}
	sort(a, a + 5,greater<int>());
	
	cout << aaaa + a[1] + a[2] + a[3] + a[4] << endl;


	return 0;
}


