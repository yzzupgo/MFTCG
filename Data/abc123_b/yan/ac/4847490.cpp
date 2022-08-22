#include"iostream"
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<list>
#include<map>
#include<string>
#include<algorithm> 
#include <queue> 
#include <sstream>
#include <fstream>
#include<cmath>
#define INF 100000000000
#define LL long long
using namespace std;
map<LL , LL> m;
long long N, M, K, ans,A,B,a[5],b[5];

string s;

int main() {
	A = 0;
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
		
		if (a[i] % 10 > 0) {
			b[i] = a[i] + (10 - (a[i] % 10));
			A = max(A, 10 - (a[i] % 10));
		}
		else {
			b[i] = a[i];
		}
	}

	for (int i = 0; i < 5; i++) {
		ans += b[i];
	}
	cout << ans-A << endl;
	return 0;
}