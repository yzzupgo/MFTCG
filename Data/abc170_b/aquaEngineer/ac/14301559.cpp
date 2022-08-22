#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <utility>
#include <iomanip>
using namespace std;
using ll = long long;
#define rep(i,a,b) for(int i=(a); i<(b); i++)
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define pai 3.14159265358979323846
ll gcd(ll a, ll b){if (a%b == 0) return(b);else return(gcd(b, a%b));}
ll lcm(ll a, ll b){return a * b / gcd(a, b);}
int main() {
int x,y;
cin >> x >> y;
for(int i =0; i<=x; i++) {
int a = i * 2 + (x -i) * 4;
if (a == y) {
yes
return 0;
}
}
no
}
