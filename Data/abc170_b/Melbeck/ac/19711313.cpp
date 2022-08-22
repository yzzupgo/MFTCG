#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <set>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)n; i++)
#define repp(i,s,n) for(int i = (int)s; i < (int)n; i++)
using ll = long long;
int main(void){
int x, y;
cin >> x >> y;
if (y % 2 == 0 && 2 * x <= y && y <= 4 * x) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
