#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <tuple>
using namespace std;
typedef long long ll;
const ll INF = 1ll << 60;
const ll MOD = 1e9 + 7;
bool greaterSecond(const pair<int, int>& f, const pair<int, int>& s){
return f.second > s.second;
}
int main(void){
int a, b;
cin >> a >> b;
if (a >= 13){
cout << b << endl;
}
else if (a >= 6){
cout << b / 2 << endl;
}
else {
cout << 0 << endl;
}
}
