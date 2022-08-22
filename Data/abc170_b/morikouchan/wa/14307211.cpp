#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
int main(){
int x, y; cin >> x >> y;
if( (4*x - y) >= 0 && ((-2)*x + y) >= 0 ){
if ((4*x-y)%2 == 0 && ((-2)*x+y)%2 == 0) cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
return 0;
}
