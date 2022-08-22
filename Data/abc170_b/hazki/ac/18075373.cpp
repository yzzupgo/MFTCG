#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<cmath>
#include<iomanip>
#define pi 3.14159265358979323846
#define mod 1000000007
#define int long long
#define elif else if
#define rep(i,a,n) for(int i = a; i < n; i++)
using namespace std;
signed main(){
int x, y;
cin >> x >> y;
rep(i, 0, x+1){
int a = y - 2 * i;
int b = x - i;
if(a - 4 * b == 0){
cout << "Yes\n";
return 0;
}
}
cout << "No\n";
}
