#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
	vector<int> d(5);
	rep(i,5) cin >> d[i];
	int mn = 700;
	int sum = 0;
	rep(i,5){
		sum += ((d[i]+9)/10)*10;
	}
	int saa = 0;
	int ookii;
	rep(i,5){
		int sa = 0;
		sa = ((d[i]+9)/10)*10 - d[i];
		if(saa < sa){
			ookii = d[i];
			saa = sa;
		}
	}
	cout << sum -((ookii+9)/10)*10 + ookii << endl;
}