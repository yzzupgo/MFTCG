#include<bits/stdc++.h>
using namespace std;

void solve(){

	int a[5];
	vector<int> p = {0, 1, 2, 3, 4};
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	int final_answer = 1e9 + 5;
	do {
		int answer = 0;
		for (int i = 0; i < 5; i++) {
			while(answer % 10 != 0) {
				answer += 1;
			}
			answer += a[p[i]];
		} 
		final_answer = min(final_answer, answer);
	} while(next_permutation(p.begin(), p.end()));
	cout << final_answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}