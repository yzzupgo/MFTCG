#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <stdio.h>
#include <cmath>
#include <iomanip>
#include <map>
#include <utility>
#include <string>
using namespace std;
typedef long long ll;
int main(){
int x, y;
cin >> x >> y;
if(y % 2 == 0 && y <= 4 * x) cout << "Yes" << endl;
else cout << "No" << endl;
}
