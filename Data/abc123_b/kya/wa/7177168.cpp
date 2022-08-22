#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define SORT(c) sort((c).begin(),(c).end())
#define REVERSE(c) reverse((c).begin(), (c).end());
const long long MOD = 10e9 + 7;
typedef long long ll;

int main(){
	int sum = 0;
	vector<pair<int,int>> D(5);
	rep(i, 5){
		cin >> D.at(i).second;
		D.at(i).first = D.at(i).second % 10;
	}
	SORT(D);
	REVERSE(D);
	rep(i, 4){
		D.at(i + 1).second /= 10;
		D.at(i + 1).second *= 10;
	}
	rep(i, 5) sum += D.at(i).second;
	cout << sum << endl;
}