#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<ctime>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

struct node {
	int a, b;
}S[1000];

bool cmp(node x, node y) {
	if (x.b > y.b) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int a[10], b[10];
	while (cin >> S[0].a) {
		int sum = 0;
		for (int i = 1; i < 5; i++) {
			cin >> S[i].a;
		}
		for (int i = 0; i < 5; i++) {
			if (S[i].a % 10 == 0) {
				S[i].b = 10;
			}
			else {
				S[i].b = S[i].a % 10;
			}
		}
		sort(S, S + 5, cmp);
		for (int i = 0; i < 4; i++) {
			if (S[i].b != 0) {
				sum = sum + S[i].a + (10 - S[i].b);
			}
			else {
				sum = sum + S[i].a;
			}
		}
		sum += S[4].a;
		cout << sum << endl;
	}
}