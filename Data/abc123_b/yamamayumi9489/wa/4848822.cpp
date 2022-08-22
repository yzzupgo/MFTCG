
#include<iostream>
#include<utility>
#include<string>
#include<vector>
#include<algorithm>
#include<deque>
#include<queue>
#include<set>
#include<map>
#include<functional>

using namespace std;
#define LL long long
#define ALF "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define LLBIG 1999999999999999999
#define INTBIG 1111111111
#define MOD 1000000007
#define PI pair<int,int>
#define VI vector<int>
#define VVI vector<vector<int>>

int main() {
	VI v;
	for (int i = 0; i < 5; i++) {
		int x; cin >> x; v.push_back(x);
	}
	int ans = 0;
	for (int i = 0; i < 5; i++) {
		ans += (v[i] % 10 ? (v[i] / 10 + 1) * 10 : v[i]);
		v[i] %= 10;
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < 5; i++) {
		if (v[i]) ans - (10 - v[i]);
		break;
	}
	cout << ans << endl;
	return 0;
}
