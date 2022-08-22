#include <bits/stdc++.h>
#include<math.h>
#define rep(i,n) for (int i = 0; i < (n) ; ++i)
using namespace std;
using ll = long long ;
using P = pair<int, int> ;
#define PI 3.14159265358979323846264338327950
int main(){
int x, y;
cin >> x >> y;
bool ans = false;
int t = 4 * x ;
int k = t - y ;
if (k % 2 == 0 && k >= 0){
ans = true ;
}
if (ans){
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
}
