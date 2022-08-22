#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <stdio.h>
#include <bitset>
#include<math.h>
#include<list>
#include<map>
#include <queue>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
#define PI 3.14159265358979323846
typedef pair<int, int> P;
int main() {
int x, y,n,t;
cin >> x >> y;
if (y % 2 == 0 && x < 51 && 2*x <= y&&x*4>=y) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
}
