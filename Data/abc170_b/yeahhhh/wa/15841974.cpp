#include <bits/stdc++.h>
using namespace std;
int main(){
int x, y;
cin >> x >> y;
for ( int i = 0; i < x; i++){
int t = x - i;
int asi = i*2 + i*4;
if ( asi == y ){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
