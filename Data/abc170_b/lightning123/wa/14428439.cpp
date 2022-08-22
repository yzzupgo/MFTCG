#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;
const int INF = 1001001001;
int main() {
double x,y; cin >> x >> y;
double b = (y-2*x)/2;
double a = x - b;
if(2*a+4*b == y && a+b==x && a >= 0 && b >= 0){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
return 0;
}
