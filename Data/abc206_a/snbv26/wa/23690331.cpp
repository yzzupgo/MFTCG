#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
typedef long long ll;
typedef double lf;
map<string, int> mountains;
map<string, int>::iterator iter;
int main(void) {
fast;
lf n;
cin >> n;
if(n * 1.08 < 206) {
cout << "Yay";
} else if(n * 1.08 == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
