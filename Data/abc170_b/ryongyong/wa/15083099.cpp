#include<bits/stdc++.h>
using namespace std ;
int main() {
int X ,Y ;
cin >> X >> Y ;
int a ;
for (a = 0 ; a < X ; a++){
if ( Y == 2*a + 4*(X-a) ){
cout << "Yes" << endl ;
return 0 ;
}
}
cout << "No" << endl ;
}
