#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
#include<map>
#include<cstdio>
#include<stack>
#include<queue>
#include<fstream>
#include<cstdio>
#include<deque>
#include<iomanip>
#include <numeric>
//#include<bits/stdc++.h>

using namespace std;
#define ok1 printf("ok1\n");
#define ok2 printf("ok2\n");
#define M 1000000000000000000LL
#define rep(i,n) for(int i=0;i<n;++i)
#define REP(i,s,n) for(int i=(s);i<(n);++i)
#define repr(i,n) for(int i=n-1;i>=0;--i)
#define REPR(i,s,n) for(int i=(s);i>=(n);--(i))
#define all(a) (a).begin(),(a).end()
#define reall(a) (a).rbegin(),(a).rend()
#define pb push_back
#define pf push_front
#define MIN(a,b) a=min((a),(b))
#define MAX(a,b) a=max((a),(b))
#define SIZE(v) (int)v.size()
const double pi = acos(-1.0);

typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef vector<char> vc;
typedef vector<double> vd;
typedef vector<bool> vb;
typedef deque<ll> dll;
typedef pair<ll, ll> P;
typedef vector<P> vP;
using Edge = pair<int, ll>;
using Graph = vector<vector<Edge> >;
const ll mod = 1e9 + 7;
ll dx[4] = { 1,0,-1,0 };
ll dy[4] = { 0,1,0,-1 };

void printvll(vll v) {
	cout << "------------------------------------------------\n";
	rep(i, v.size()) cout << v[i] << " ";
	cout << endl;
	cout << "------------------------------------------------\n";
}
void printvvll(vvll v) {
	cout << "------------------------------------------------\n";
	rep(i, v.size()) {
		rep(j, v[i].size()) {
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
	cout << "------------------------------------------------\n";
}

void prints(string s) {
	cout << "------------------------------------------------\n";
	rep(i, s.size()) cout << s[i] << " ";
	cout << endl;
	cout << "------------------------------------------------\n";
}

void printvs(vs s) {
	cout << "------------------------------------------------\n";
	rep(i, s.size()) {
		rep(j, s[i].size()) {
			cout << s[i][j] << " ";
		}
		cout << endl;
	}
	cout << "------------------------------------------------\n";
}

void Yes(bool x) {
	if (x) cout << "Yes\n";
	else cout << "No\n";
}

void YES(bool x) {
	if (x) cout << "YES\n";
	else cout << "NO\n";
}

void yes(bool x) {
	if (x) cout << "yes\n";
	else cout << "no\n";
}

ll  d, n, r, l, k, ans = 0, ret = M;
bool flag = false, flag2 = false;
string s, t;
ll a, b, c;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	/*vll v(5);
	rep(i, 5) {
		cin >> v[i];
		//cout << v[i] << endl;
	}
	cin >> k;
	if (v[4] - v[0] > k) cout << ":(" << endl;
	else cout << "Yey!\n";*/
	vll v(5);
	rep(i, 5) {
		cin >> v[i];
		if (v[i] % 10 != 0) {
			if (ret > v[i] % 10) {
				ret = min(ret, v[i] % 10);
				a = v[i];
				b = i;
			}
		}
	}
	if (ret == M) a = v[0];
	rep(i, 5) {
		if (i == b) continue;
		if(v[i] % 10 != 0) ans += (v[i] / 10 + 1) * 10;
		else ans += v[i];
		//cout << ans << endl;
	}
	//cout << ret << endl;
	cout << ans + a << endl;
	return 0;

}
