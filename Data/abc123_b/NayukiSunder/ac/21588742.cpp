#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;

void solve(){

	vector<int> A(5);
	cin >> A[0] >> A[1] >> A[2] >> A[3] >> A[4];
	vector<int> P = {0, 1, 2, 3, 4};
	int final_answer = INF;
	do{
		int answer = 0;
		for(int i = 0; i < 5; i++){
			while(answer % 10 != 0){
				answer += 1;
			}
			answer += A[P[i]];
		}
			final_answer = min(final_answer, answer);
		
	}while(next_permutation(P.begin(), P.end()));
	cout << final_answer;

}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}