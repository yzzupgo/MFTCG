#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <numeric>
#include <set>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<char> vc;
#define PI 3.14159265359
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repz(i,n) rep(i,0,n)
int check_digits(int n) {
int digits = 0;
while (n != 0) {
n /= 10;
digits++;
}
return digits;
}
int main() {
int n,digits;
int ans = 0;
cin >> n;
switch (check_digits(n)) {
case 5:
ans = (9 + 1000 + (n-999));
break;
case 4:
ans = (9 + 1000);
break;
case 3:
ans = (9 + (n - 99));
break;
case 2:
ans = 9;
break;
case 1:
ans = n;
break;
}
cout << ans << endl;
return 0;
}
