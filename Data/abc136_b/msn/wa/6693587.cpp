#include <iostream>
#include <ios>
#include <iomanip>
#include <utility>
#include <functional>
#include <math.h>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>
#include <sstream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <tuple>
#include <queue>
using namespace std;
#define rep(i,n,x) for(int i=n;i<x;i++)
#define rem(i,n,x) for(int i=n;i>x;i--)
#define SORT(x) sort(x.begin(),x.end())
#define rev(x) reverse(x.begin(),x.end())
#define all(x) x.begin(),x.end()
#define pb push_back
#define setp(x) setprecision(x)
using ll = long long;
using ull = unsigned long long;
int main() {
int n;
cin >> n;
int count = 0;
int num = n;
while (num > 0) {
count++;
num /= 10;
}
if (count == 1) cout << n << endl;
else if (count == 2) cout << 9 << endl;
else if (count == 3) cout << 9 + (n - 100 + 1) << endl;
else if (count == 4) cout << 909 << endl;
else cout << 909 + (n - 10000) << endl;
return 0;
}
