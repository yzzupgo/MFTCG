/*
	submission # - User: herp_sy
	https://atcoder.jp/contests/

	coding: utf-8
	lang: C++ (GCC 5.4.1)
*/

#include <bits/stdc++.h>
using namespace std;

// utility of stdin,stdout
#define _CRT_SECURE_NO_WARNINGS
#define OUT cout << 
#define BR << endl
#define RET return 0
#define TLong long long
#define TBMod 1000000007

int main(int argc, char const *argv[])
{
	int ma = 0,m = 0;
	vector<int> menu(5);

	for(int i = 0; i < 5; ++i){
		cin >> menu.at(i);
		if(menu.at(i) % 10 != 0 && menu.at(i) % 10 < menu.at(ma) % 10)	ma = i;
	}
	for(int i = 0; i < 5; ++i){
		if(i != ma){
			if(menu.at(i) % 10 != 0)	m += menu.at(i) + (10 - menu.at(i) % 10); 
			else	m += menu.at(i);
		}
	}
	m += menu.at(ma);
	OUT(m) BR;
	RET;
}
