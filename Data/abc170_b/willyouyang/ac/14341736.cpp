#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int x, y, a, b;
cin >> x >> y;
if( y%2 == 1){
cout << "No";
}
else{
a = (y - 2 * x) / 2;
b = (4 * x - y) / 2;
if( a < 0 || b < 0){
cout << "No";
}
else{
cout << "Yes";
}
}
return 0;
}
