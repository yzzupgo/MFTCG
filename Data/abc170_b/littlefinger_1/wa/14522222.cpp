#include <iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<string>
#include <numeric>
#include<math.h>
#include<queue>
#include<unordered_map>
#include<cmath>
#define fo(i,n) for(int i=0;i<n;i++)
#define fo1(i,n) for(int i=1;i<=n;i++)
#define ll long long int
#define pi (double)3.14159265359
#define vect vector <int>
#define pb push_back
using namespace std;
void solve() {
int x, y;
cin >> x >> y;
int t = (y - (2 * x));
if (t % 2 == 0 && t>0) {
if (t / 2 < x)
cout << "Yes" << endl;
else cout << "No" << endl;
}
else cout <<"No";
}
int main(){
solve();
return 0;
}
