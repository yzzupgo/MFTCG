#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <bitset>
#include<vector>
#include<utility>
#include<fstream>
using namespace std;
typedef long long ll;
#define rep(i,k) for(i=0;i<k;i++)
#define P pair<int,int>
ll n, k,a,b,c,i,j,x,y,z=0;
int main() {
cin >>n;
a = 1;
rep(i, 8) {
if (n >= a && n < a * 10) {
b = i+1; break;
}
a = a * 10;
}
c = b / 2;
x = 1;
rep(i, c) {
z = z + x*9;
x = x * 100;
}
if (b % 2 == 1)z = z + n - x + 1;
cout << z;
return 0;
}
