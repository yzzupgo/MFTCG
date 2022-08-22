#include<bits/stdc++.h>
using namespace std;
int main(){
int x, y;
cin >> x >> y;
if(y%2 != 0 || y > 4*x || 2*x > y) cout << "No" << endl;
else cout << "Yes" << endl;
return 0;
}
