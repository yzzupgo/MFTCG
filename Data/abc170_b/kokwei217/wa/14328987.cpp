#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265359
#define MODULO 1000000007
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vii;
int main () {
ios_base::sync_with_stdio(false);
cin.tie(0);
int x,y;
cin >> x >> y;
int result = y - (x*2);
string s = "No";
if( result %2 == 0){
if (result/2 <= x)
s = "Yes";
}
cout << s;
}
