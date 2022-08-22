
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

#define in(x) cin >> x
#define out(x) cout << x << endl

#define PI acos(-1)
#define pp push_back

#define Yes cout << "Yes" << endl
#define YES cout << "YES" << endl
#define No cout << "No" << endl
#define NO cout << "NO" << endl

#define vec2(type) vector<vector<type>>
#define vec3(type) vector<vector<vector<type>>>

#define For(i, n) for(int i = 0; i < n; i++)

#define Tcmp(X, Y) (abs(aryvec[i]->x) == X && abs(aryvec[i]->y) == Y)

template<typename T> void input(T *data, int n){
	For(i, n){
		cin >> data[i];
	}
}

template<typename T> void sort(vector<T> &ary){
	sort(ary.begin(), ary.end());
}

template<typename T> void rsort(vector<T> &ary){
	sort(ary.rbegin(), ary.rend());
}

void rstring(string &str){
	string temp = str;

	For(i, (int)str.size()){
		str[i] = temp[(str.size() - 1) - i];
	}
}

struct Vec{
	int x, y;
	Vec():
	x(0), y(0){}
};

int main(){

	int x[5];

	input(x, 5);

	int time = 0;
	int maxloss = 0;

	For(i, 5){
		time += (x[i] % 10 == 0) ? x[i] : ((x[i] / 10 + 1) * 10);
		if(x[i] % 10 && (x[i] / 10  + 1) * 10 - x[i] > maxloss){
			maxloss = (x[i] / 10 + 1) * 10 - x[i];
		}
	}

	time -= maxloss;

	out(time);
	
	return 0;

}