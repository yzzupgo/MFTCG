#include<string>
#include<iostream>
#include <algorithm>
#include<vector>
#include<functional>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <numeric>
#include <math.h>
#define ll long long
#define PI 3.14159265358979323846
#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep1(x,n) for(ll x=1;x<(ll)n+1;x++)
using namespace std;
int main() {
ll X, Y;
ll asi, hiki;
cin >> X >> Y;
rep(i, 50) {
rep(j, 50) {
hiki = i + j;
asi = 2 * i + 4 * j;
if (hiki == X && asi == Y) {
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}
