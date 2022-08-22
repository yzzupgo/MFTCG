#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
int main() {
int x,y;
cin >> x >> y;
rep(i,x){
if(2*i == y-2*x){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
