#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
#include <tuple>
#include <set>
#include <map>
#include <cassert>
using namespace std;
int main() {
int n;
cin >> n;
n *= 1.08;
const int price_base = 206;
string s;
if(n < price_base) {
s = "Yay!";
} else if(n == price_base) {
s = "so-so";
} else {
s = ":(";
}
cout << s << endl;
return 0;
}
