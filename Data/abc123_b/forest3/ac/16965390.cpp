#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> abc( 5 );
	for( int i = 0; i < 5; i++ ) {
		cin >> abc[i];
	}

	vector<int> o( 5 );
	for( int i = 0; i < 5; i++ ) o[i] = i;
	int ans = INT32_MAX;
	do {
		int t = 0;
		for( int i = 0; i < 5; i ++ ) {
			t += abc[ o[i] ];
			if( i < 5 - 1 && t % 10 ) t += 10 - t % 10;
		}
		ans = min( ans, t );
	} while( next_permutation( o.begin(), o.end() ) );

	cout << ans << endl;
}
