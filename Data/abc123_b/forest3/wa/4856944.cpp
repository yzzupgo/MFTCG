#include <bits/stdc++.h>
using namespace std;

#define INF (INT32_MAX)
#define MAX 5

int a[MAX];
int k;
int d[66];

int main() {
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];

	int k = 0;
	do {
		d[k] = 0;
		for( int i = 0; i < 5; i++ ) {
			d[k] += a[i];
			if( i < 5 - 1 ) {
				if( d[k] % 10 ) {
					d[k] = (d[k] / 10 + 1) * 10;
				}
			}
		}
		k++;
	} while( next_permutation( a, a + 5 ) );
	sort( d, d + k );
	int ans = d[0];

	cout << ans << endl;

	return 0;
}
