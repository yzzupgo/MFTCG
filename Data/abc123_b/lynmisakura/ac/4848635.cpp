
#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

#define lint long long

int main() {

	vector<pair<int,int>> A(5);
	for (int i = 0; i < 5; i++)
	{
		int a;
		cin >> a; int b;
		if (a % 10 != 0) {
			b = a % 10;
		}
		A[i] = make_pair(b, a);
	}
	sort(A.begin(), A.end());
	
	int sum = A[0].second;
	for (int i = 1; i < 5; i++)
	{
		if (A[i].second % 10 == 0) {
			sum += A[i].second;
		}
		else {

			int b = A[i].second - (A[i].second % 10) + 10;
			sum += b;
		}

	}

	cout << sum << endl;
}