#include <bits/stdc++.h>
using namespace std;
int main(){
int x, y;
cin >> x >> y;
bool flag = false;
for(int i=0; i<=x; i++){
for(int j=0; j<=x-i; j++){
if(y == 2*i+4*j) flag = true;
}
}
if(flag) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
